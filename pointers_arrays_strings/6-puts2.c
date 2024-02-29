#include "main.h"
/**
  *puts2 - prints every other character of a string,
  *starting with the first character
  *
  *@str: value numbers
  *
  */
void puts2(char *str)
{
	int counter = 0, lenght = 0;

	while (str[counter++])

		lenght++;

	for (counter = 0; counter < lenght; counter += 2)

		_putchar(str[counter]);

	_putchar('\n');
}
