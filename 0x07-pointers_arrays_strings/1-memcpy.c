/**
 *_memcpy - a function that copies memory area
 *@dest: memory area
 *@src: memory area
 *@n: bytes from memory
 *Return: a pointer to dest
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
