#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum 
  * @a: int
  * @b: int
  *
  * Return: add
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub -  returns the difference
  * @a: int
  * @b: int
  *
  * Return: sub
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product 
  * @a: int
  * @b: int
  *
  * Return: mul
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div -  returns the result of the division 
  * @a: int
  * @b: int
  *
  * Return: div
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
  * @a:int
  * @b: int
  *
  * Return: mod
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
