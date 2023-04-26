#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number that will be checked.
 * Return: 1 if the number is postive,
 * 0 if the number equal zero and -1 if the number is negaive.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
