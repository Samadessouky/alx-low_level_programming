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
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			else if (product < 10 && y != 0)
			{
				_putchar(' ');
				_putchar((product % 10) + 48);
			}
			else
				_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
	}
