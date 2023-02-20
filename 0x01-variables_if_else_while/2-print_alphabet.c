#include <stdio.h>
/**
 * main - print the alphabet in lower case
 * followd by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
