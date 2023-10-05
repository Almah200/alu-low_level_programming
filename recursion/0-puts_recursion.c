#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string s recursively
 *@s: Pointer to string s
 */
void _puts_recursion(char *s)
{
	/* if we reach the end of the string */
	if (*s == '\0')
	{
		putchar('\n');/* print a new line*/
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);/* call the recursively */
}
