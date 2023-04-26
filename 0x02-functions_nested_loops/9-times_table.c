#include "main.h"


/**
 * times_table - prints the 9 times table.
 *
 */

	void times_table(void)
	{
		int x;
		int y;
		int product;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');
		for (y = 0; y < 10; y++)
		{
			_putchar(',');
			_putchar(' ');

			product = x * y;
			if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
	}
