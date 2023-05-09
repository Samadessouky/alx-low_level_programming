/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
