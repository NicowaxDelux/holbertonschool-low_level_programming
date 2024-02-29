#include "main.h"
/**
  *puts_half - prints half of a string
  *
  *@str: value half of string
  *
  */
void puts_half(char *str)
{
	int counter = 0, lenght = 0, numbers;

	while (str[counter++])

		lenght++;

	if ((lenght % 2) == 0)

		numbers = lenght / 2;
	else
		numbers = (lenght + 1) / 2;

	for (counter = numbers; counter < lenght; counter++)

		_putchar(str[counter]);


	_putchar('\n');

}
