#include "main.h"

/**
 * _strchr - entry point
 * @c: input value
 * @s: input value
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
