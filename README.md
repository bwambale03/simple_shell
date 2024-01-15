# Simple Shell Project

Welcome to the Simple Shell project! This is a minimalist shell implementation written in C. It provides basic command-line functionality and serves as a foundation for understanding shell mechanics.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [How to Use](#how-to-use)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project aims to create a simple shell that demonstrates fundamental concepts of command-line interfaces and process handling in Unix-like operating systems. It provides a starting point for those interested in understanding the inner workings of a shell.

## Features

- Basic command execution
- Change directory (`cd`) functionality
- Environment variable management
- Error handling and syntax checking
- Signal handling (e.g., handling SIGINT)

## Project Structure

The project is organized into several C files, each contributing to specific aspects of the shell's functionality. Here's a brief overview:

- `main.c`: Entry point and main loop of the shell.
- `cmd_exec.c`: Command execution logic.
- `cd.c`: Implementation of the change directory (`cd`) command.
- `env1.c` and `env2.c`: Environment variable management.
- `aux_*` files: Auxiliary functions for error handling, string manipulation, and memory management.

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/bwambale03/simple_shell.git
2. 1. **Navigate to the project directory**

    ```bash
    cd simple_shell
3. **compile source **
    ```bash
    gcc -o simple-shell *.c -Wall -Wextra -Werror -pedantic
4. **Run the shell**
    ```bash
    ./simple-shell
5. **Try out basic shell commands**
    ```bash
    ls
    cd my_directory
    echo "Hello, Shell!"
