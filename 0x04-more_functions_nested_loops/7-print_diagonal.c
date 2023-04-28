#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line.
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
				_putchar(' ');
				else if (j == i)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}
