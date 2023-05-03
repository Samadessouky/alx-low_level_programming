/**
* _strlen - returns the length of a string
 * @s: parameter
 * Return: length of a string
 */

#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
