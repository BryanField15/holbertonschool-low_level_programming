#include "main.h"

/**
 *print_chessboard -prints a chessboard
 *@a: 2d array chessboard size
 */

void print_chessboard(char (*a)[8])
{
	int y;
	int x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x = x + 1;
		}
		_putchar('\n');
		y = y + 1;
	}
}
