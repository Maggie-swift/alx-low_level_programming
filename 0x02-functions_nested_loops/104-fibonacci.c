#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, a = 0, b = 1, c = 0;
	unsigned long int a1, a2, b1, b2, c1, c2;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i != 97)
			printf("%lu, ", c);
		else
			printf("%lu\n", c);
	}
	a1 = 0;
	b1 = 1;
	for (i = 0; i < 48; i++)
	{
		c1 = a1 + b1;
		a1 = b1;
		b1 = c1;
		a2 = c1 / 10000000000;
		b2 = c1 % 10000000000;
		c2 = a2 + b2;
		printf("%lu%lu", c2, b2);
	}
	printf("\n");
	return (0);
}
