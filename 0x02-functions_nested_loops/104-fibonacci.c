#include <stdio.h>

/**
 * main - Prints the first 100 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int next;

	printf("%lu, %lu", fib1, fib2);

	for (i = 2; i < 100; i++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}
