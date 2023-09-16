#include <stdio.h>

/**
 * main - Entry point
 *
 * This is the main function where the program starts execution.
 * It prints combinations of lowercase and uppercase alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char salphabet;
	char calphabet;

	for (salphabet = 'a'; salphabet <= 'z'; salphabet++) 
	{
		putchar(salphabet);
    }

	for (calphabet = 'A'; calphabet <= 'Z'; calphabet++) 
	{
		putchar(calphabet);
    }

	putchar('\n');
	return (0);
}
