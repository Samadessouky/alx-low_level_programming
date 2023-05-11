/**
 * factorial - returns the factorial of a number
 * @n: the number we will get factorial or
 * Return: n is lower than 0, the function should return -1 to indicate an error
 */
#include "main.h"
#include <stdio.h>
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
