#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - excecutes before main()
 *
 * Return: 0
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
