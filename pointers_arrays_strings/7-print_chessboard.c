#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard (8x8)
 *
 * Description:
 * This function prints an 8x8 chessboard using nested loops.
 * Each element of the array 'a' represents a piece or empty space.
 * It prints each row and adds a new line at the end of each row.
 *
 * Return: Nothing (void)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
