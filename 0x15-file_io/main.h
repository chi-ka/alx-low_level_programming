#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* FILE_UTILS_H */

