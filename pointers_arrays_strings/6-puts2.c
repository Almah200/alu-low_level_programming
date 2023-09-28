#include "main.h"
#include <stdio.h>
/**
 * puts2 - Returns every character of a string.
 * @str: Poniter
 */
void puts2(char *str)
{
	int length = strlen(str);
    int i;

    for (i = 0; i < length; ++i)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
