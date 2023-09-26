#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: Pointer of a variable 
 *
 *Return: returns the length an int
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;

	}
	return length;
}
