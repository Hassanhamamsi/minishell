minishell: src/main.c src/input.c src/parser.c src/executor.c src/chdir.c
	$(CC) $(CFLAGS) src/main.c src/input.c src/parser.c src/executor.c src/chdir.c -o minishell