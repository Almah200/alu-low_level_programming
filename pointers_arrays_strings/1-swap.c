#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function takes two pointers to integers
 * a and b, and swaps their values.
 * The original values of a and b are modified in the process.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
