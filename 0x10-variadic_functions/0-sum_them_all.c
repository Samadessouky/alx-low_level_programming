/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: the integers to sum
 * return: n == 0, return 0
 */
#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}

