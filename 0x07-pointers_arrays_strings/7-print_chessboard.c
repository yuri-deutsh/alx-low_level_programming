#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int p;

	for (j = 0; j < 8; j++)
	{
	for (p = 0; p < 8; p++)
	_putchar(a[j][p]);
	_putchar('\n');
		}
		}
