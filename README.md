# minishell

A simple Unix shell implementation in C.

## Features
- Command execution
- Built-in commands (cd, exit)
- Custom prompt with current directory
- Input validation and error handling

## Build
```bash
make
```

## Usage
```bash
./minishell
```

## Built-in Commands
| Command | Description |
|---------|-------------|
| cd [path] | Change directory |
| exit | Exit the shell |

## Project Structure

minishell/
├── src/
│ ├── main.c # Entry point and main loop
│ ├── input.c # Input reading
│ ├── parser.c # Command parsing
│ ├── executor.c # Command execution
│ └── builtins.c # Built-in commands
├── include/
│ └── shell.h # Header file
└── Makefile


## What I learned
- Memory management in C
- Process management (fork/execvp)
- System calls (read, write, chdir)
- Input validation and defensive programming
