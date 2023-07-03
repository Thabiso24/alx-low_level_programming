#include "main.h"

/**
 * _strpbr - searches a string
 * @s: input value
 * @accept: input value
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
				return (s);
		}
		s++;
	}
	return ('\0');
}
