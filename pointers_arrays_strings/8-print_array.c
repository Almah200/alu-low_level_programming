#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array values
 * @a: array Pointer
 * @n: integer paramter
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
