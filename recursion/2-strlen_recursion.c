#include <stdio.h>
#include <string.h>
/**
 *  _strlen_recursion - function to return length
 *  @s: Pointer
 */
size_t _strlen_recursion(char *s)
{
    size_t length = 0;
    const char *temp = s;

    while (*temp)
    {
        length++;
        temp++;
    }
    
    return length;
}
