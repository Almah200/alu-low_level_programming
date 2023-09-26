#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in verse
 *  followed by a new line
 *  @s: Pointer to the string to be printed
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (end >= s)
	{
		putchar(*end);
		end--;

	}

	putchar('\n');
}
