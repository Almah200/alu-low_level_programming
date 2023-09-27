#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * puts_half - prints the half string
 * @str: Pointer
 *
 *
 */
void puts_half(char *str)
{
	int length, mid, i, k;
	char *rightHalf;

	length = strlen(str);
i	mid = (length - 1) / 2;

	rightHalf = malloc((length - mid) * sizeof(char));

	if (rightHalf == NULL)
	{

		fprintf(stderr, "Memory allocation failed\n");
		return;
	}

	for (i = mid + 1, k = 0; i < length; ++i, ++k)
	{
		rightHalf[k] = str[i];
	}

	rightHalf[k] = '\0';

	puts(rightHalf);

	free(rightHalf);
}
