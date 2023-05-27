#include "shell.h"

/**
 * findpath - find, set and return path to command executable
 *
 * @av: user input
 *
 * Return: path to command executable on success
 * NULL on failure
 */

char *findpath(char **av)
{
	char *paths, *paths_copy, *paths_copy_copy;
	char *token;
	size_t counter = 0;
	char **path_arr;

	/*set command*/
	char *cmd = av[0];

	/*get PATH value*/
	paths = _getenv("PATH");
	/*duplicate paths*/
	paths_copy = my_strdup(paths);
	paths_copy_copy = my_strdup(paths);
	/*exit if duplicate paths fails*/
	if (paths_copy == NULL)
		handle_error("paths duplication failed", EXIT_FAILURE);
	/*count directory path in paths*/
	token = _strtok(paths_copy, ":");
	while (token)
	{
		counter++;
		token = _strtok(NULL, ":");
	}
	free(paths_copy);
	/*create buffer to store each directory path*/
	path_arr = malloc(sizeof(char *) * (counter + 1));
	if (path_arr == NULL)
		handle_error("malloc error", EXIT_FAILURE);
	/*store each directory path to path_arr*/
	token = _strtok(paths_copy_copy, ":");
	counter = 0;
	while (token)
	{
		path_arr[counter] = token;
		token = _strtok(NULL, ":");
		counter++;
	}
	path_arr[counter] = NULL;
	/*return path to executable or NULL*/
	return (check_exec(path_arr, cmd, paths_copy_copy));
}

/**
 * check_exec - checks if executable exist in path
 *
 * @path_arr: array of environment paths
 * @cmd: user command
 * @paths: environment paths
 *
 * Return: path to executable on success
 * or NULL of fail
 */

char *check_exec(char **path_arr, char *cmd, char *paths)
{
	size_t counter = 0;
	size_t path_len, cmd_len;
	char *path, *path_dir;

	/*determine length of command*/
	cmd_len = my_strlen(cmd);
	/*find path to executable*/
	counter = 0;
	while (path_arr[counter])
	{
		path_dir = my_strdup(path_arr[counter]);
		path_len = my_strlen(path_dir);
		path = malloc(sizeof(char) * (path_len + cmd_len + 2));
		path[0] = '\0';
		my_strcat(path, path_dir);
		my_strcat(path, "/");
		my_strcat(path, cmd);
		if (access(path, X_OK) == 0)
		{
			free(path_dir);
			free(path_arr);
			free(paths);
			return (path);
		}
		free(path_dir);
		free(path);
		counter++;
	}
	free(path_arr);
	free(paths);
	return (NULL);
}
