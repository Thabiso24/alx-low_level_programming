#include <unistd.h>

/**
 * _putchar - write the character c
 * @c:The character to print
 * Return: 1 if true, 0 if false
 * on error, 0 return
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}

