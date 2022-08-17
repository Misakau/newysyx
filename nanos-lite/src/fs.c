#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, invalid_write},
#include "files.h"
};

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int fs_open(const char *pathname, int flags, int mode){
  int nfs = sizeof(file_table)/sizeof(Finfo);
  bool is_find = 0;
  int ret = 0;
  for(int i = 0; i < nfs; i++){
    if(strcmp(pathname,file_table[i].name) == 0){
      ret = i;
      is_find = 1;
      break;
    }
  }
  if(!is_find) assert(0);
  return ret;
}

size_t fs_read(int fd, void *buf, size_t len){
  if(fd < 3) return 0;
  assert(buf);
  size_t offset = file_table[fd].disk_offset + file_table[fd].open_offset;

  assert(file_table[fd].size >= file_table[fd].open_offset);

  size_t readable = file_table[fd].size - file_table[fd].open_offset;
  
  if(readable == 0) return 0;

  size_t bytes = len;
  if(readable < len) bytes = readable;

  ramdisk_read(buf, offset, bytes);
  file_table[fd].open_offset += bytes;

  return bytes;
}

size_t fs_write(int fd, const void *buf, size_t len){
  if(fd < 3){
    if(fd == 0) return 0;
    char *str = (char *)buf;
    for(int i = 0; i < len; i++)
      putch(str[i]);
    return len;
  }
  assert(fd >= 3);
  assert(buf);
  size_t offset = file_table[fd].disk_offset + file_table[fd].open_offset;

  assert(file_table[fd].size >= file_table[fd].open_offset);

  size_t writable = file_table[fd].size - file_table[fd].open_offset;
  
  if(writable == 0) return 0;


  size_t bytes = len;
  if(writable < len) bytes = writable;

  ramdisk_write(buf, offset, bytes);
  file_table[fd].open_offset += bytes;

  return bytes;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  switch (whence){
  case SEEK_SET:
    file_table[fd].open_offset = offset;
    break;
  case SEEK_CUR:
    file_table[fd].open_offset += offset;
    break;
  case SEEK_END:
    file_table[fd].open_offset = file_table[fd].size + offset;
    break;
  default: 
    assert(0);
    break;
  }
  return file_table[fd].open_offset;
}

int fs_close(int fd){
  file_table[fd].open_offset = 0;
  return 0;
}
