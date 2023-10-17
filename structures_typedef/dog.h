#include <stdio.h>

/**
 * @file dog.h
 *
 * This is the header file for the Dog structure.
 */

#ifdef DOG_H
#define DOG_H

/**
 * @struct dog
 * A structure representing information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
