#include "main.h"

/**
 *print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	
	i = (0);
        while (i < 10)
	{
		ch = ('a');
		while (ch <= 'z')
		{
		       _putchar(ch);
		       ch++;
		}
		{
		       _putchar('\n');
	               i++;
	 }	
}
