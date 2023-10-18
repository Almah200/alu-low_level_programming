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
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
