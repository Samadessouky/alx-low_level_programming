#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14
 * return: always 0
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar(49);
			_putchar (j % 10 + 48);
		}
		_putchar('\n');
	}
}
