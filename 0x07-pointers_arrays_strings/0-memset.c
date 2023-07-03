#include "main.h"

/**
 * _memset - function fills the first bytes of the memory
 * @n: input value
 * @s: input value
 * @b: input value
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int f = 0;

	for (; n > 0; f++)
	{
		s[f] = b;
		n--;
	}
	return (s);
}
