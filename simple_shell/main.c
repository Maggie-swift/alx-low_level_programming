#include "shell.h"

/**
 * main - handles number of arguments passed
 * @ac: Tallies arguments
 * @av: An array of arguments handles
 * @env: the environment created
 * Return: 0;
 */

int main(int ac, char **av, char **env)
{
	if (!ac)
		(void)ac;
	simple_shell(ac, av, env);
	return (0);
}
