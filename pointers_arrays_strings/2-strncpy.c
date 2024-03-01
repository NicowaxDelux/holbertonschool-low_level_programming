#include "main.h"
/**
  *_strncpy - write a function that copies a string.
  *
  *@dest: string value
  *@src: string value
  *@n: new bytes
  *
  *Return: return string
  */
char *_strncpy(char *dest, char *src, int n)
{

	int count = 0, lenght = 0;

	while (dest[count++])

		lenght++;

	for (count = 0; src[count] && count < n; count++)

		dest[count] = src[count];

	for (count = lenght; count < n; count++)

		dest[count] = '\0';

	return (dest);
}
