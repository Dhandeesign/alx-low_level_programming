#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int q;
	int z;

	for (q = 0; q < 8; q++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[q][z]);
		_putchar('\n');
	}
}
