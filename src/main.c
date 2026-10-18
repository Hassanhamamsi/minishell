#include <stdio.h>
#include <string.h>
#include "../include/shell.h"
#define MAX_INPUT 1024


int main(void){
    char user_cmd_buf[MAX_INPUT] = {0};
    char *args[64];
    int argc = 0;
    write(1, "$ ", 2);
    ssize_t n = read_input(user_cmd_buf,MAX_INPUT);
    argc = parse_input(user_cmd_buf, args, 64);
    for (int i = 0; i < argc; i++)
    {
        printf("args[%d] = %s\n", i, args[i]);
    }
    



   // printf("READ: %s\n", user_cmd_buf);
   // printf("BYTES READ: %ld\n", n);
   return 0;
}