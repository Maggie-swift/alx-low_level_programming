#include <stdio.h>

/**main - Entry
 *Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n",unsigned sizeof(char));
        printf("Size if a int: %d bytes(s)\n",unsigned sizoeof(int));	
	printf("Size of a long int: %d byte(s)\n",unsigned sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",unsigned sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n",unsigned sizeof(float));
        return (0);
}
