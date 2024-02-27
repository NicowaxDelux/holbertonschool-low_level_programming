#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: return value x10 the result
 */
void more_numbers(void)
{
	int number, counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 10)

				_putchar((number / 10) + '0');

			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
