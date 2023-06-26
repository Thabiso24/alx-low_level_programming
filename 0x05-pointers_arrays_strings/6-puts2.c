#include "main.h"

/**
 * puts2 - function that prints every other string
 * @str: input
 * Return 0
 */

void puts2(char *str)
{
	int ong = 0;
	int i = 0;
	char *c = str;
	int w;

	while (*c != '\0')
	{
		c++;
		ong++;
	}
	i = ong - 1;
	for (w = 0; w <= i; w++)
	{
		if (0 % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
