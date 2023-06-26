#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int ong = 0;

	int v;

	while (*s != '\0')
	{
		ong++;
		s++;
	}
	s--;
	for (v = ong; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
