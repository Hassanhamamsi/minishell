#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

ssize_t read_input(char *buf, size_t max_size) {
    
    if (buf == NULL || max_size == 0) {
        return -1;
    }

    
    ssize_t bytes_read = read(0, buf, max_size - 1);
    if (bytes_read < 0) {
        return -1;
    }
    if (bytes_read != 0 && buf[bytes_read-1] == '\n')
    {
        buf[bytes_read-1] = '\0';
    } else {
        buf[bytes_read] = '\0';
    }
    
    
    return bytes_read;
}