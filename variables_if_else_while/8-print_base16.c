#include <stdio.h>

/**
 * main - Entry point
 *
 * This is the main function where the program starts execution.
 * It generates a random number, assigns it to 'n', and prints whether 'n' is
 * positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit;

	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit);
	}

	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit);
	}

	putchar('\n');

	return (0);
}
