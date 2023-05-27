#include "shell.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t characters_read;
	char *newline;
	char *command;

	while (1)
	{
		printf("$ ");
		characters_read = getline(&buffer, &bufsize, stdin);
		if (characters_read == -1)
		{
			printf("\n");
			break;
		}

		newline = strchr(buffer, '\n');
		if (newline != NULL)
			*newline = '\0';

		command = buffer;

		/* Process the command */
		/* ... */

		printf("Command: %s\n", command);
	}

	free(buffer);
	return (0);
}
