/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: byte pointer
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
#include "main.h"
#include <stdio.h>
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
