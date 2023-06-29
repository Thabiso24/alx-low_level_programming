#include "main.h"

/**
 * reverse_array - reverses content array of intergers
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int g;

	for (f = 0; f < n--; f++)
	{
		g = a[f];
		a[f] = a[n];
		a[n] = g;
	}
}

