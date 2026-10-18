#include <stdio.h>
#include <string.h>
#include "../include/shell.h"
#define MAX_INPUT 1024


int main(void){
    char user_cmd_buf[MAX_INPUT] = {0};
    write(1, "$ ", 2);
    ssize_t n = read_input(user_cmd_buf,MAX_INPUT);
    printf("READ: %s\n", user_cmd_buf);
    printf("BYTES READ: %ld\n", n);
   return 0;
}