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
			_putchar(y);
		}
		_putchar('\n');
	}
}
