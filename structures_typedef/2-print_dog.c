#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Function to print struct dog variable elements
 *Return - Nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL\n");
	} else {
		printf("%s\n", (*d).name);
		printf("%f\n", (*d).age);
		printf("%s\n", (*d).owner);
	}
}
