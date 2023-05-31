/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: strig to be ptintef
 * @n: no of ints
 * Return: always 0
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int x;

	va_start(vlist, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(vlist, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vlist);
}
