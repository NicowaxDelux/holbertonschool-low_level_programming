#include "main.h"
/**
  * print_rev - prints a string, in reverse
  *
  * @s: value stirng reverse
  */
void print_rev(char *s)
{
	int lenght = 0, counter;

	while (s[counter++])
		lenght++;


	for (counter = lenght - 1; counter >= 0; counter--)

		_putchar(s[counter]);


	_putchar('\n');
}
