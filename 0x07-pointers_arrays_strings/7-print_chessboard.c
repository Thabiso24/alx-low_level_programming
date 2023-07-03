#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int v;
	int s;

	for (v = 0; v < 8; v++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[v][s]);
		_putchar('\n');
	}
}
