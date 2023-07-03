#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	int v;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		v = 0;

		if (haystack[v] == needle[v])
		{
			do {
				if (needle[v + 1] == '\0')
					return (haystack);

				v++;

			} while (haystack[v] == needle[v];
					}
					haystack++;
					}
					return ('\0');
}
