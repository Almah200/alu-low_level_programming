#include "main.h"

/**
 * _abs - prints the absolute of a number
 * @a: The number to be checked
 * Return: n if positive num, * -1 for negative num
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = (-1) * a;
	}

	return (a);
}
