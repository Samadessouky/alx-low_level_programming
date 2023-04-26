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
		for (y = 0; y < 10; y++)
		{
			product = x * y;
			_putchar(',');
			_putchar(' ');
			if (product <= 9)
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
