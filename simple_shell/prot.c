#include <shell.h>

/**
 * prompt - prints $ for prompt
 * Return: void
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(1, "$ ", 3);
	}

}
