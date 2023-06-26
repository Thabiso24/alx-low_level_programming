#include "main.h"

/**
 * swap_int - function that swaps values
 * @a: interger
 * @b: interger
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
