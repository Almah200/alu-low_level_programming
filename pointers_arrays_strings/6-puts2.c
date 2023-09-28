#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Returns every character of a string.
 * @str: Poniter
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			putchar(str[a]);
		}
		a++;
	}
	putchar('\n');
}
