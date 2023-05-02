#include "main.h"

/**
 * puts_half - Prints half of a string,
 * followed by a new line.
 * @str: The string to be treated
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	if (i % 2 == 0)
	{
		for (i /= 2; str[i] != '0'; i++)
			_putchar(str[i]);
	}

	if (i % 2 == 1)
	{
		for ((i + 1) /= 2; str[i] != '0'; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
