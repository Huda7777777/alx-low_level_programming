#include "main.h"

/**
 * print_diagonal - function that draws a diagonal on the terminal
 * @n: the length of the line
 */

void print_diagonal(int n)
{
	int colum, space, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (colum = 0; colum < n; colum++)
		{
			i = colum - 1;

			for (space = 0; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
