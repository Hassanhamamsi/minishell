#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/shell.h"

int builtin_chdir(char **args) {
    // Precondition
    if (args == NULL)
        return -1;

    const char *target_dir = NULL;

    // Error: كتير أوي
    if (args[2] != NULL) {
        fprintf(stderr, "minishell: cd: too many arguments\n");
        return -1;
    }
    // Case: cd أو cd ~
    else if (args[1] == NULL || args[1][0] == '~') {
        target_dir = getenv("HOME");
        if (target_dir == NULL) {
            fprintf(stderr, "minishell: cd: HOME not set\n");
            return -1;
        }
    }
    // Happy Path
    else {
        target_dir = args[1];
    }

    // Execute
    if (chdir(target_dir) == -1) {
        perror("minishell: cd");
        return -1;
    }

    return 0;
}