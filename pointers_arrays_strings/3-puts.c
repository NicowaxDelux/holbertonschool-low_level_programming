#include "main.h"
/**
  * _puts - prints a string, followed by a new line
  *
  *@str: value string
  *
  */
void _puts(char *str)
{
	while (*str)

		_putchar(*str++);

	_putchar('\n');
}
