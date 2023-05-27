#include "shell.h"

/**
 * main - a simple shell program
 *
 * @ac: an argument passed from terminal
 * @av: an argument vector from terminal
 *
 * Return: 0 on failure
 */

int main(__attribute__((unused))int ac, char **av)
{
/*	environ = make_environ_arr(environ);*/

	loop(av[0]);

/*	free(environ);*/
	return (0);
}
