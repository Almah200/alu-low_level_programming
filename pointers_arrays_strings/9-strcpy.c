#include <string.h>

/**
 * _strcpy - copy from *src and paste it in *dest
 *@src: Pointer
 *@dest: second Pointer to the duffer
 *Return: returns Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
