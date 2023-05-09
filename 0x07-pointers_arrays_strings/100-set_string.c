/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer
 */
#include "main.h"
#include <stdio.h>
void set_string(char **s, char *to)
{
	*s = to;
}

