#include <stdio.h>
#include <ctype.h>

/**
 * int _islower(int c) - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}