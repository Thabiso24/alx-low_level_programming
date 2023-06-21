#include <stdio.h>
/**
 * main - Possible combinations
 * Return: 0 (Success)
 */

int main(void)
{
	int v;

	for (v = 0; v < 10; v++)
	{
		putchar(v + '0');
		if (v < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
