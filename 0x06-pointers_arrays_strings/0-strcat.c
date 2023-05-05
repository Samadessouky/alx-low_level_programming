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
	char *restr = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (restr);
}
