/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: length
 */
#include "main.h"
#include <stdio.h>
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	else
	{
	return (length);
	}
}
