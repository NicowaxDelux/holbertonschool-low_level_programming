#include "main.h"
/**
  * print_rev - prints a string, in reverse
  *
  * @s: value stirng reverse
  */
void print_rev(char *s)
{
	int index, counter, lenght;


	index = 0;

	while (s[index] != '\0')

		index++;

	lenght = index;


	for (counter = lenght - 1; counter >= 0; counter--)

		_putchar(s[counter]);


	_putchar('\n');
}
