#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _prompt - Display a prompt and wait for the user to type a command.
 *
 * Return: Always 0
 */
int _prompt(void)
{
	char *message = "Hello, Betty!";
	char *command = NULL;
	size_t bufsize = 0;
	ssize_t chars_read;

	printf("%s\n", message);

	while (1)
	{
		printf("$ "); /* Display the prompt */
		chars_read = getline(&command, &bufsize, stdin);
		if (chars_read == -1)
		{
			if (feof(stdin)) /* Handle end of file (Ctrl+D) */
			{
				printf("\n");
				break;
			}
			else /* Handle getline() error */
			{
				perror("getline");
				exit(EXIT_FAILURE);
			}
		}

		/* Remove the trailing newline character */
		command[strcspn(command, "\n")] = '\0';

		/* Execute the command */
		if (system(command) == -1)
		{
			perror("system");
		}
	}

	free(command);
	return (0);
}
