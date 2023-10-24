#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that writes a name by taking function pointers
 * Returns - Nothing
 * @name: variable name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
