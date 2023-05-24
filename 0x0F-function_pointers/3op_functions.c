#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of 2 integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub -  returns the difference of 2 integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - returns the product of 2 integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: multiblication
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - returns the result of the division of 2 integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * of 2 integers
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
