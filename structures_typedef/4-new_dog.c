#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates anew dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecopy, *ownercopy;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecopy = malloc(len_name + 1);
	if (namecopy == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		namecopy[i] = name[i];
	namecopy[i] = '\0';

	ownercopy = malloc(len_owner + 1);
	if (ownercopy == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		ownercopy[i] = owner[i];
	ownercopy[i] = '\0';

	new_dog->name = namecopy;
	new_dog->age = age;
	new_dog->owner = ownercopy;
	return (new_dog);
}
