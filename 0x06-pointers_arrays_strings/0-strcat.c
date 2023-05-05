/**
* _strncat -  a function that concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return:  pointer to the resulting string dest
 */

#include "main.h"
#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	int x=0;
	int y=0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
