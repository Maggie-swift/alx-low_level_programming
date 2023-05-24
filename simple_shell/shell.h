#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <fcntl.h>

#include "macros.h"

/**
 * struct info - Structure holding information about the program
 * @program_name: The name of the executable program
 * @input_line: Pointer to the input read by _getline
 * @command_name: Pointer to the first command typed by the user
 * @exec_counter: Number of executed commands
 * @file_descriptor: File descriptor for the input of commands
 * @tokens: Pointer to the array of tokenized input
 * @env: Copy of the environment variables
 * @alias_list: Array of pointers with aliases
 */
typedef struct info
{
	char *program_name;
	char *input_line;
	char *command_name;
	int exec_counter;
	int file_descriptor;
	char **tokens;
	char **env;
	char **alias_list;
} data_of_program;

/**
 * struct builtins - Structure for built-in commands
 * @builtin: The name of the built-in command
 * @function: The associated function to be called for each built-in command
 */
typedef struct builtins
{
	char *builtin;
	int (*function)(data_of_program *data);
} builtins;

void initialize_data(data_of_program *data, int arc, char *argv[], char **env);
void sisifo(char *prompt, data_of_program *data);
void handle_ctrl_c(int opr UNUSED);
int _getline(data_of_program *data);

#endif /* SHELL_H */
