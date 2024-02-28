#include "main.h"
#include <string.h>
/**
  *_strlen -  returns the length of a string.
  *
  *@s: value pointer
  *
  *Return: lenght of char str
  */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)

		lenght++;

	return (lenght);
}
