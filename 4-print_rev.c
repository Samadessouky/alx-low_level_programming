/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line
 * @s: parameter
 * return: always 0
 */
#include "main.h"
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
