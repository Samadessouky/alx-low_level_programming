/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: size input
 * Return: Always 0.
 */
#include "main.h"
#include <stdio.h>
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int x;

	for (x = 0; x < size; x++)
		s1 = s1 + a[x * size + x];
	for (x = size - 1; x >= 0; x--)
		s2 += a(x * size + (size - x - 1));
	printf("%d, %d\n", s1, s2);
}

