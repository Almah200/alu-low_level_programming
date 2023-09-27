#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: Pointer to a string to be reversed
 * @begin_ptr: second Pointer
 * @end_ptr: thir Pointer
 *
 */
void rev_string(char* s)
{
	int length, i;
	char *begin_ptr, *end_ptr, ch;
	length = strlen(s);
	begin_ptr = s;
	end_ptr = s;
	
	for (i = 0; i < length - 1; i++)
		end_ptr++;
	for (i = 0; i < length / 2; i++)
	{
		/* swapping */
		ch = *end_ptr;
		
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		
		/* update begin and end pointers*/
		begin_ptr++;
		end_ptr--;
	}
}
