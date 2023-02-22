#include <stdio.h>

/**
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *              Numbers are separated by comma and space, followed by a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i;
        unsigned long a = 1, b = 2, c;

        printf("%lu, %lu", a, b);
        for (i = 2; i < 98; i++)
        {
                c = a + b;
                printf(", %lu", c);
                a = b;
                b = c;
        }
        printf("\n");

        return (0);
}
