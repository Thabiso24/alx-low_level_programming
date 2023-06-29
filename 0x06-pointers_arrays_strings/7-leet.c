#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int f, g;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (f = 0; n[f] != '\0'; f++)
	{
		for (g = 0; g < 10; g++;)
		{
			if (n[f] == s1[g])
			{
				n[f] = s2[g];
			}
		}
	}
	return (n);
}
