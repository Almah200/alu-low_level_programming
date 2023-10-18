#include "dog.h"
#include <stdio.h>

/**
 *print_dog - Function to print struct dog variable elements
 *@d: struct pointer
 * Return - Nothing
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil\n");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
