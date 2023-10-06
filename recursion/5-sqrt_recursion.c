#include "main.h"
int _sqrt(int back, int home);

/**
 * _sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int back, int home)
{
	if (back > home)
		return (-1);
	else if (back * back == home)
		return (back);
	return (_sqrt(back + 1, home));
}
