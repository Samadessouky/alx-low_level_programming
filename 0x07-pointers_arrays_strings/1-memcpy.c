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
	int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
