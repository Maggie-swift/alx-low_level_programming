#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_env - Set or modify an environment variable
 * @name: Name of the environment variable
 * @value: Value to be assigned to the variable
 *
 * Return: 0 on success, -1 on failure
 */
int set_env(const char *name, const char *value)
{
	int success;

	if (name && value)
	{
		char *env_var;
		size_t len;

		len = strlen(name) + strlen(value) + 2;
		env_var = malloc(len);
		if (env_var)
		{
			snprintf(env_var, len, "%s=%s", name, value);
			success = (putenv(env_var) == 0) ? 0 : -1;
			free(env_var);
			return (success);
		}
	}
	return (-1);
}

/**
 * unset_env - Remove an environment variable
 * @name: Name of the environment variable
 *
 * Return: 0 on success, -1 on failure
 */
int unset_env(const char *name)
{
	int success;

	if (name)
	{
		char *env_var;
		size_t len;

		len = strlen(name) + 2;
		env_var = malloc(len);
		if (env_var)
		{
			snprintf(env_var, len, "%s=", name);
			success = (putenv(env_var) == 0) ? 0 : -1;
			free(env_var);
			return (success);
		}
	}
	return (-1);
}
