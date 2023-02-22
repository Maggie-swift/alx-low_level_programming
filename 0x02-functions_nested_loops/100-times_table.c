#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
    int i, j, k;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        _putchar('0');
        for (j = 1; j <= n; j++)
        {
            k = i * j;
            _putchar(',');
            _putchar(' ');

            if (k < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(k + '0');
            }
            else if (k < 100)
            {
                _putchar(' ');
                _putchar(k / 10 + '0');
                _putchar(k % 10 + '0');
            }
            else
            {
                _putchar(k / 100 + '0');
                _putchar(k / 10 % 10 + '0');
                _putchar(k % 10 + '0');
            }
        }
        _putchar('\n');
    }
}

int main(void)
{
    int tables[] = {2, 10, 13, 2, 0, 100};
    int num_tables = sizeof(tables) / sizeof(tables[0]);
    int i;

    for (i = 0; i < num_tables; i++)
    {
        printf("Table of %d:\n", tables[i]);
        print_times_table(tables[i]);
        printf("\n");
    }

    return (0);
}

