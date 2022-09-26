#include "main.h"

/**
 * print_chessboard - printd a chessboard
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	for (int i1 = 0; a[i1][7]; i1++)
	{
		for (int i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i1][i2]);
		}

		_putchar('\n');
	}
}
