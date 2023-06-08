#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int
 * @index: int
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	ireturn (n >> index & 1);
}
