#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "../include/shell.h"


void execute(char **args){
    if (args[0] == NULL)
    {
        return;
    }
    pid_t pid = fork();

    if (pid == -1)
    {
        perror("fork failed");
        return 1;
    }else if (pid == 0)
    {
        int result;
        result = execvp(args[0],args);
        if (result == -1)
        {
             perror("bash command not found ...");
             _exit(1);
        }
        
    }else
    {
        int status;
        waitpid(pid, &status, 0);
    }
    
    
    
    
    
    
    



}