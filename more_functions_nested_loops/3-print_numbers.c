#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: Always 0.
 */
void print_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		_putchar(number);

		number++;
	}
	_putchar('\n');
}
