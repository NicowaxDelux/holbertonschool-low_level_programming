#include "main.h"
/**
  * _strncat -Write a function that concatenates two strings.
  *
  *@dest: string dest
  *@src : string src
  *@n: more bytes
  *
  *Return: return string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, lenght = 0;

	while (dest[count++])

		lenght++;

	for (count = 0; src[count] && count < n; count++)

		dest[lenght++] = src[count];

	return (dest);
}
