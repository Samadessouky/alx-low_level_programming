/**
 * swap_int - a function that swaps the values of two integers
 * @a: parameter
 * @b: parameter
 */

#include "main.h"
#include <stdio.h>
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
