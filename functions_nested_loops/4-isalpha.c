#include "main.h"

/**
 *_isalpha - Check if a character is an alphabet letter.
 * @c: The character to check.
 * Return: 1 if the character is an alphabet letter, 0 otherwise.
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
