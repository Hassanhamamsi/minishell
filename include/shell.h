#ifndef SHELL_H
#define SHELL_H

#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

ssize_t read_input(char *buf, size_t max_size);
int     parse_input(char *buf, char **args, int max_args);
void    execute(char **args);

#endif