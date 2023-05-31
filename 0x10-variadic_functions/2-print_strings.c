
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: printed strings
 * @n: number of passed str
 * Return: always 0
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int x;
	char *str;

	va_start(vlist, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(vlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vlist);
}
