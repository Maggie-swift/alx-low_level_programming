#include "shell.h"

/**
 *exit_c - Runs exit builtin
 *@li : buffer for the line
 *@arg : args in the input
 *@env : the enviroment created
 * Returns Void
 */

void exit_c(char **arg, char *li, char **env)
{
	free(arg);
i	free(li);
	(void)env;
	exit(0);

}
