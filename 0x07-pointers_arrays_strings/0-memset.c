/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory
 * Return: a pointer to the memory area s
 */
#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (x = 0; x > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
