#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 *op_add - Returns sum of the 2 integers
 *@a: first int
 *@b: second int
 *
 * Return: The sum of the 2 intergers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns sum of the 2 integers
 *@a: first int
 *@b: second int
 *
 * Return: The subtraction of the 2 intergers
 */
int op_sub(int a, int b)
{
        return (a - b);
}

/**
 *op_mul - Returns sum of the 2 integers
 *@a: first int
 *@b: second int
 *
 * Return: The multiplication of the 2 intergers
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 *op_div - Returns sum of the 2 integers
 *@a: first int
 *@b: second int
 *
 * Return: The division of the 2 intergers
 */
int op_div(int a, int b)
{
        if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	return (a / b);
}

/**
 *op_mod - Returns sum of the 2 integers
 *@a: first int
 *@b: second int
 *
 * Return: The modulas of the 2 intergers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
                exit(100);
        }
	
	return (a % b);
}
