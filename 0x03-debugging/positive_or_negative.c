#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * positive_or_negative - point of entry code in c
 * @n: integer
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	
}
