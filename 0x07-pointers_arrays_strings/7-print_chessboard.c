#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int b, c;

	b = 0;
	while (b < 8) /*number repetitions*/
	{
		c = 0;
		while (c < 8)
		{
			_putchar (a[b][c]);
			c++;
		}
		_putchar ('\n'); /*print new line*/
		b++; /*add +1*/
	}

}
