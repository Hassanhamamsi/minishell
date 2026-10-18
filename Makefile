minishell: src/main.c src/input.c src/parser.c src/executor.c
	$(CC) $(CFLAGS) src/main.c src/input.c src/parser.c src/executor.c -o minishell