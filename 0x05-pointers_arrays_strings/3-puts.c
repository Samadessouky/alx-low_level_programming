/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: parameter
 * return; always 0
 */
#include "main.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

