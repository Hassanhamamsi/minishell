#include <stdio.h>
#include <string.h>
#include "../include/shell.h"

int parse_input(char *buf, char **args, int max_args ){
  int i = 0;
  args[i] = strtok(buf, " \t\n");

  while (args[i] != NULL && i < max_args - 1 )
  {
    i++ ;
    args[i] = strtok(NULL, " \t\n");

  }
  args[i] = NULL;
  return i;
}