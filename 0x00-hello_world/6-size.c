#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of float: %d byte(s)\n", sizeof(float));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));
	return (0);
}
