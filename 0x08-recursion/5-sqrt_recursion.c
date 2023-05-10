include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * @y: int
 * Return: int
 */

int square(int n, int y);
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int
 * @y: int
 * Return: int
 */

int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(y + 1, n));
	else
		return (-1);
}
