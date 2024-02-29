#include "main.h"
#include <string.h>
/**
  * print_rev - prints a string, in reverse
  *
  * @s: value stirng reverse
  */
void print_rev(char *s)
{
	int counter = 0;
	int lenght = strlen(s);

	for (counter = lenght; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
