#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intype;
	long longtype;
	long long longlongtype;
	char chartype;
	float floatype;

	printf("Size of a char: %lu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %lu byte(s)\n", sizeof(intype));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longtype));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongtype));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatype));
	return (0);
}
