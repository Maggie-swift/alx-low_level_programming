#include "shell.h"

/**
 * _env - prints environmental variables
 *
 * @av: user input comands
 * @lineptr: user input command string
 * @commands: array of user commands
 * @lineptr_copy: element of commands array
 *
 * Return: always 1
 */

int _env(char **av, char *lineptr, char **commands, char *lineptr_copy)
{
	size_t i = 0;

	while (environ[i])
	{
		_puts(environ[i]);
		_puts("\n");
		i++;
	}

	freeLAP(av, commands, lineptr, lineptr_copy, NULL);

	return (1);
}

/**
 * exit_shell - exit shell
 *
 * @av: tokenized input command
 * @lineptr: user input command string
 * @commands: array of user commands
 * @lineptr_copy: element of commands array
 *
 * Return: Always 0
 */

int exit_shell(char **av, char *lineptr, char **commands, char *lineptr_copy)
{
	freeLAP(av, commands, lineptr, lineptr_copy, NULL);
/*	free_arr(environ);*/
	if (errno != 0)
		exit(errno);
	exit(0);
}


/**
 * _cd - change directory of simple shell
 *
 * @av: argument from user command input
 * @lineptr: user input command string
 * @commands: array of user commands
 * @lineptr_copy: element of commands array
 *
 * Return: 1 on success
 */

int _cd(char **av, char *lineptr, char **commands, char *lineptr_copy)
{
	if (av[1] == NULL)
	{
		perror("cd $HOME yet to be implemented");
	}
	else
	{
		if (chdir(av[1]) != 0)
			perror("Change directory error");
	}
	freeLAP(av, commands, lineptr, lineptr_copy, NULL);

	return (1);
}
