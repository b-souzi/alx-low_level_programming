#ifndef Main_H
#define Main_H
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);

#endif
