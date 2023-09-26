#include "main.h"
#include <stdio.h>

/**
 * -print_rev - Prints a string in verse
 *  followed by a new line
 *  @s: Pointer to the string to be printed
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length -1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
