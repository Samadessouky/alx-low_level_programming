#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The input number.
 *
 * Return: lastdigit.
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}

	_putchar(lastdigit + '0');

	return (lastdigit);
}
