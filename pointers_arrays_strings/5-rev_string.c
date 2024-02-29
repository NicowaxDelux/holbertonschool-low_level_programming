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
	int counter = 0, lenght = 0;

	while (s[counter++])

		lenght++;

	for (counter = lenght - 1; counter >= lenght / 2; counter--)
	{
		temp = s[counter];
		s[counter] = s[lenght - counter - 1];
		s[lenght - counter - 1] = temp;
	}

}
