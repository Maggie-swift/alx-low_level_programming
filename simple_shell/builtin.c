#include "shell.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	char *buffer;
	size_t bufsize = 0;
	ssize_t characters_read;

	while (1)
	{
		printf("$ ");
		characters_read = getline(&buffer, &bufsize, stdin);
		if (characters_read == -1)
		{
			printf("\n");
			break;
		}
		printf("%s", buffer);
	}

	free(buffer);
	return (0);
}
