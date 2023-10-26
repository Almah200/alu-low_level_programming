#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function to call action
 * @array: Pointer to an array
 * @size: size of an array
 * @action - Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
