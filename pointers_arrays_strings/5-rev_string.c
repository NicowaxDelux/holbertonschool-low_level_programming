#include "main.h"
/**
  * rev_string - Write a function that reverses a string.
  *
  * @s: value of string reverse
  *
  *
  */
void rev_string(char *s)
{
	char temp;
	int counter, lenght, lenght1;

	lenght = 0;
	lenght1 = 0;

	while (s[lenght] != '\0')

		lenght++;

	lenght1 = lenght - 1;

	for (counter = 0; counter < lenght / 2; counter++)
	{
		temp = s[counter];
		s[counter] = s[lenght1];
		s[lenght--] = temp;

	}

}
