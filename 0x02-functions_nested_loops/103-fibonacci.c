#include<stdio.h>

/**
 * main - prints the sum of even valued terms of fibonacci series
 * below 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int j, k, next;
	long int sum;

	j = 0;
	k = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		next = j + k;
		j = k;
		k = next;
		if (next % 2 == 0)
			sum += next;
		if (next > 4000000)
			break;
	}
	printf("%ld\n", sum);

	return (0);
}
