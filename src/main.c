#include <unistd.h>
#include <stdio.h>
#include "../include/shell.h"

#define MAX_INPUT 1024
#define MAX_ARGS  64
#define MAX_PATH  4096

int main(void) {
    char user_cmd_buf[MAX_INPUT] = {0};
    char *args[MAX_ARGS];
    int argc = 0;
    char cwd[MAX_PATH] = {0};
    while (1) {
        if (getcwd(cwd, sizeof(cwd)) != NULL)
        {
            printf("%s $ ",cwd);
            fflush(stdout);
        }else
        {
            write(1, "$ ", 2);
        }
        
        
        ssize_t n = read_input(user_cmd_buf, MAX_INPUT);
     
        if (n <= 0)  // EOF أو error
            break;
            
        argc = parse_input(user_cmd_buf, args, 64);
        if (argc == 0 || args[0] == NULL) {
            continue; 
        }
           if (strncmp(args[0], "cd", 3) == 0)
    builtin_chdir(args);
    else if (strncmp(args[0], "exit", 5) == 0)
    exit(0);
    else
    execute(args);
    }
    return 0;
}