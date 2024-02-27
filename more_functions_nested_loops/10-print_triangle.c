#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 *@size: is the size of the triangle
 *
 * Return: f size is 0 or less, the function should print only a new line
 */
void print_triangle(int size)
{
	int counter, rows;

	if (size > 0)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (rows = size - counter; rows > 0; rows--)

				_putchar(' ');

			for (rows = 0; rows < counter; rows++)

				_putchar('#');

			if (counter == size)

				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
