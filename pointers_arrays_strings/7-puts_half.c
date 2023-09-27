#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints the half string
 * @str: Pointer
 *
 *
 */
void puts_half(char *str)
{
	char rightHalf[100];
	int length, mid, i, k;

	length = strlen(str);
	mid = length / 2;

	if (length % 2 == 0)
	{
		for (i = mid, k = 0; i < length; ++i, ++k)
		{
			rightHalf[k] = str[i];
		}
	}
	else
	{
		for (i = mid + 1, k = 0; i < length; ++i, ++k)
		{
			rightHalf[k] = str[i];
		}
	}
	
	rightHalf[k] = '\0';
	
	printf("%s\n", rightHalf);
}
