/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: square root to be calculated
 * Return: If n does not have a natural square root,
 * the function should return -1
 * * @x: for iteration
 */
#include "main.h"
#include <stdio.h>
int sqrtt(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrtt(n, 0));
}
/**
 * sqrtt - a function that returns the natural square root of a number.
 * @n: sqaure root for this number
 * @x: for iteration
 * Return: square root
 */
int sqrtt(int n, int x)
{
	if (x * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	else
		return (sqrtt(n, x + 1));
}

