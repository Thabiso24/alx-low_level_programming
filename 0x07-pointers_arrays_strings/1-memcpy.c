#include "main.h"

/**
 * _memcpy - function that copies
 * @src: input value
 * @dest: input value
 * @n: input value
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int s = n;

	for (; v < s; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
