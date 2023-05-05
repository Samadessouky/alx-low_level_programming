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
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
