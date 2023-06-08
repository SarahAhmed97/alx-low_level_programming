#include "main.h"

/**
 * get_endianness - get_endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
