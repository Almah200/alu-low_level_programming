#include <stdio.h>
#include <string.h>
/**
 *  _strlen_recursion - Returns thelength of the string s
 *  @s: Pointer
 */
size_t _strlen_recursion(char *s)
{
	size_t length = 0;

	if (*s)
	{
		length++;
		s++;
		length += _strlen_recursion(s);
	}

	return (length);
}
