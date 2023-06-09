#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * printf fizz if multiple by 3
 * prints buzz if multiple by 5
 * prints fizzbuzz if multiple by 3 and 5
 * Return: Always 0 (Success)
 */
int main()
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		    printf(" Fizz");
		else if (x % 5 == 0 && x % 3 != 0)
			printf(" Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf(" FizzBuzz");
		else if (x == 1)
			printf("%d", x);
		else
			printf(" %d", x);
	}
	printf("\n");
	return (0);
}
