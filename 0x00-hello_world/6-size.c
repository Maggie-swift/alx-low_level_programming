#include <stdio.h>

/*main - Entry
 *Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof (char));
        printf("Size if a int: %d bytes(s)\n", sizoeof(int));	
	printf("Size of a long int: %d byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n",sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n",sizeof(float));
        return (0);
}
