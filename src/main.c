#include <unistd.h>
#include <stdio.h>
#include "../include/shell.h"

#define MAX_INPUT 1024
#define MAX_ARGS  64


int main(void) {
    char user_cmd_buf[MAX_INPUT] = {0};
    char *args[64];
    int argc = 0;

    while (1) {
        write(1, "$ ", 2);
        ssize_t n = read_input(user_cmd_buf, MAX_INPUT);
        if (strncmp(args[0], "cd", 3) == 0){
        builtin_chdir(args);}

        if (n <= 0)  // EOF أو error
            break;
            
        argc = parse_input(user_cmd_buf, args, 64);
        execute(args);
    }
    return 0;
}