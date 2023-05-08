#include "main.h"
/**
 * _strchr -  a function that locates a character in a string
 * @s: pointer
 * @c: input
 * Return:  a pointer to the first occurrence of the character c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
