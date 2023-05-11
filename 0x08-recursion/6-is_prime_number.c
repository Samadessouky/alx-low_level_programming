#include "main.h"
int primee(int n, int x);
#include <stdio.h>
/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to evaluate
 * Return: returns 1 if the input integer
 * is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (primee(n, n - 1));
}
/**
 * primee - see if a number is prime
 * @n: number to be checked
 * @x: for iteration
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int primee(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0 && x > 0)
		return (0);
	else
		return (primee(n, x - 1));
}

