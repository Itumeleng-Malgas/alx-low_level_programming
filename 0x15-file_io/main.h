#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void print_error(const char* message);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/************** cp ************/
#define BUFFER_SIZE 1024
void error_out(int code, const char *format, const char *arg);

#endif /* MAIN_H */
