#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Pointer to an array
 *@size: size of an array
 *@c: char c
 *Return: - If size is 0, returns NULL.
 *     Otherwise, returns a pointer to the allocated and initialized array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
