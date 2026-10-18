CC = gcc
CFLAGS = -Wall -Wextra -g

minishell: src/main.c src/input.c
	$(CC) $(CFLAGS) src/main.c src/input.c -o minishell

clean:
	rm -f minishell