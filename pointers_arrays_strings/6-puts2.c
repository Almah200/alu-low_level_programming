#include "main.h"
#include <stdio.h>
/**
 * puts2 - Returns every character of a string.
 * @str: Poniter
 */
void puts2(char *str)
{
	int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    putchar('\n');
}

