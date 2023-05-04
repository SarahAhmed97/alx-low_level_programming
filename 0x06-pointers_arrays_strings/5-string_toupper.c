#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters
 * to uppercase
 * @str: string to be changed
 * Return: pointer to the changed string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
