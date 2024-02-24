#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: Returns 1 and prints + if n is greater than zero
 * @n: Returns 0 and prints 0 if n is zero
 * @n: Returns -1 and prints - if n is less than zero
 * Return: return result of statement if
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar(0);
			return (0);
		}
	}
}
