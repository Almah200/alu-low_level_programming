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
        char alphabet;

        for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
        {
        putchar(alphabet);
        }

        putchar('\n');
        return (0);
}
