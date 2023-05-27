#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * change_directory - Change the current working directory
 * @path: The directory path to change to
 *
 * Return: On success, returns 0. On error, returns -1.
 */
int change_directory(const char *path)
{
	char *cwd;
	int ret;

	cwd = getcwd(NULL, 0);
	if (!cwd)
	{
		perror("getcwd");
		return (-1);
	}

	if (chdir(path) == -1)
	{
		perror("chdir");
		free(cwd);
		return (-1);
	}

	ret = setenv("PWD", path, 1);
	if (ret == -1)
	{
		perror("setenv");
		free(cwd);
		return (-1);
	}

	free(cwd);
	return (0);
}

/**
 *  cntrl- handles command lines with arguments
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int cntrl(int argc, char **argv)
{
	char *home_dir = getenv("HOME");
	char *path;

	if (argc > 2)
	{
		fprintf(stderr, "Usage: %s [DIRECTORY]\n", argv[0]);
		return (2);
	}

	if (argc == 1 || (argc == 2 && strcmp(argv[1], "~") == 0))
	{
		if (home_dir)
			path = home_dir;
		else
			path = "";
	}
	else if (strcmp(argv[1], "-") == 0)
	{
		path = getenv("OLDPWD");
		if (!path)
		{
			fprintf(stderr, "cd: OLDPWD not set\n");
			return (2);
		}
	}
	else
		path = argv[1];

	if (change_directory(path) == -1)
		return (1);

	return (0);
}
