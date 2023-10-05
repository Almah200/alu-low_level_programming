#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * * _sqrt_recursion - Compute the square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The square root of n if it's a natural number, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	double sqrtValue;

	if (n < 0)
	{ 
		return (-1);
	}

	sqrtValue = sqrt(n);
	if (sqrtValue == (int)sqrtValue)
	{
		return (int) sqrtValue;
	}
	else
	{
		return (-1);
	}
}
