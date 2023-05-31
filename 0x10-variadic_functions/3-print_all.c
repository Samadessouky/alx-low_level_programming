/**
 * print_all - a function that prints anything
 * @format: arguments passed to the function.
 * Return: always 0
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list vlist;
	unsigned int i = 0;
	unsigned int j;
	unsigned int c = 0;
	char *str;
	const char t_arg[] = "anyth";

	va_start(vlist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vlist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(vlist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(vlist, double)), c = 1;
			break;
		case 's':
			str = va_arg(vlist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(vlist);
}
