#include "variadic_function.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: integers to sum
 * Return: integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	ve_end(ap);
	return (s);
}
