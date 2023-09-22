#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: The number to be checked
 * Return: last digit
 */
int print_last_digit(int n)
{
int ar;
if (n < 0)
n = -n;
ar = n % 10;
if (ar < 0)
ar = -ar;
_putchar(ar + '0');
return (ar);
}
