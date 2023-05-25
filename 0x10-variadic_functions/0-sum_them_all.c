#include "variadic_function.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: integers to sum
 * Return: integer sum
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (!n)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
