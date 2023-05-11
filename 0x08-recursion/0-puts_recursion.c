#include "main.h"
/**
 * _puts_recursion -  a function that prints a string, followed by a new line
 * @s: pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 48)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
