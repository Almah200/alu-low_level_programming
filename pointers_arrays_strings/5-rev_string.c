#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: Pointer to a string to be reversed
 *
 */
void rev_string(char *s)
{
	int length, i;
	char *b, *e, ch;

	length = strlen(s);
	b = s;
	e = s;
	for (i = 0; i < length - 1; i++)
		e++;
	for (i = 0; i < length / 2; i++)
	{
		/* swapping */
		ch = *e;
		*e = *b;
		*b = ch;
		/* update begin and end pointers*/
		b++;
		e--;
	}
}
