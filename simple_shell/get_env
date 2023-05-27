#include "shell.h"

/**
 * get_env - function that returns environment value
 *
 * @variable: environment variable
 *
 * Return: environment value
 */

char *get_env(char *variable)
{
	size_t i, j;
	char *envstr;
	size_t len = my_strlen(variable);

	for (i = 0; environ[i]; i++)
	{
		envstr = environ[i];
		/*compare variable with envstr*/
		for (j = 0; j < len; j++)
		{
			if (envstr[j] == variable[j])
				continue;
			break;
		}
		/*check if character after variable name is "="*/
		if (j == len && envstr[j] == '=')
			return (_strstr(envstr, "="));
	}

	return (0);
}
