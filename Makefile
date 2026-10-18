CC = gcc
CFLAGS = -Wall -Wextra -g

minishell: src/main.c src/input.c src/parser.c
	$(CC) $(CFLAGS) src/main.c src/input.c src/parser.c -o minishell

clean:
	rm -f minishell