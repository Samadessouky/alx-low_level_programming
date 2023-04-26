#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98.
* @n: where we start printing
*/
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = 0; x < 99; x++)
			printf("%d, ", x);
	}
	else if (n > 98)
	{
		for (x = 0; x > 99; x--)
			printf("%d, ", x);
	}
	printf("\n");
}
