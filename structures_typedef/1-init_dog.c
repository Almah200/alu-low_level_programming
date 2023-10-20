#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Function that initialize a variable of type struct dog
 *@d: struct to initialize
 *@name: First member
 *@owner: Second member
 *@age: Third member
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
