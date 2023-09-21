#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void printLowerCase ()
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

int main()
{
	printLowerCase();
	putchar('\n');
	
	return (0);
}
