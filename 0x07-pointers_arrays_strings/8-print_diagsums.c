#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: input value
 * @size: input value
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, t;

	for (t = 0; t < size; t++)
	{
	sum1 += a[t * size + t];
	}

	for (t = size - 1; t >= 0; t--)
	{
	sum2 += a[t * size + (size - t - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
