#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int ong = 0;

	while (*s != '\0')
	{
		ong++;
		s++;
	}

	return (ong);
}
