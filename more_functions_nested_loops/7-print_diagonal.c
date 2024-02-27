#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is the number of times the character \ should be printed
 * Return: return value of n
 */
void print_diagonal(int n)
{
	int diagonal_line, space;

	if (n > 0)
	{
		for (diagonal_line = 0; diagonal_line < n ; diagonal_line++)
		{
			for (space = 0; space < diagonal_line; space++)
				_putchar(' ');
			_putchar('\\');

			if (diagonal_line == n - 1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');
}
