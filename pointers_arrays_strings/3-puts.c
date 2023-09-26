#include "main.h"
#include <stdio.h>

/**
 *_puts - Prints a string
 *@str: Pointer to the string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
