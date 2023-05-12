#include "main.h"
#include <stdio.h>

/**
 *  _strcmp -  compares two strings
 *  @s1: pointer to 1st string
 *  @s2: pointer to 2nd string
 *  Return: 0 if str1 == str2
 *  (-) if str1 < str2
 *  (+) if str1 > str2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
