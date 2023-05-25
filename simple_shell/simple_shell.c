#include "shell.h"

/**
 * simple_shell - Infinite loop running simple shell
 * @ac: Tallies arg
 * @av: args passed to shell at beginning of program
 * @env: the environment
 * Return: void
 */
void simple_shell(int ac, char **av, char **env)
{
	char *li;
	char **arg;
	int status = 1;
	char *tmp = NULL;
	char *er;
	int flow;

	er = "Error";
	do {
		prompt();
		li = gline();
		arg = s_line(li);
		flow = b(arg[0], arg);
		if (flow == 2)
		{
			arg[0] = f_path(arg[0], tmp, er);
			if (arg[0] == er)
			{
				perror(er);
			}
		}
		if (arg[0] != er)
			status = exe_prog(arg, li, env, flow);
		free(li);
		free(arg);
	} while (status);
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
}
