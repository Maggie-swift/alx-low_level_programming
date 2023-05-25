#include "shell.h"

/**
 *exit_c - Runs the exit builtin
 *@li : buffor for the line
 *@arg : args from the input
 *@env : enviroment
 * Returns Void
 */

void exit_c(char **arg, char *li, char **env)
{
	free(arg);
	free(li);
	(void)env;
	exit(0);

}
