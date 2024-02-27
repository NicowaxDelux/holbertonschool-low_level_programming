#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: f size is 0 or less, the function should print only a new line
 *
 */
void print_square(int size)
{
	int counter_rows, counter_columns;

	for (counter_rows = 0; counter_rows < size; counter_rows++)
	{
		for  (counter_columns = 0; counter_columns < size; counter_columns++)

			_putchar('#');

		_putchar('\n');
	}
}

