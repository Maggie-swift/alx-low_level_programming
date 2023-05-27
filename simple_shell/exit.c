#include <stdio.h>
#include <stdlib.h>

/**
 * opt - handle arguments for the built-in exit.
 * @argc: The number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int opt(int argc, char *argv[])
{
	int status = 0;

	if (argc > 1)
	{
		status = atoi(argv[1]);
		if (status < 0 || status > 255)
		{
			printf("Error: Invalid exit status\n");
			return (2);
		}
	}

	printf("$ ");
	/* Your code to read and execute commands goes here */

	return (status);
}
