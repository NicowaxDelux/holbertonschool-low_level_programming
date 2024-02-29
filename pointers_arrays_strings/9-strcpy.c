#include "main.h"
/**
  *_strcpy - function that copies the string pointed to by src
  *
  *@dest: volue of string new
  *@src: value string
  *Return: return value copy
  */
char *_strcpy(char *dest, char *src)
{
	int counter, lenght = 0;

	while (src[lenght] != '\0')

		lenght++;

	for (counter = 0; counter < lenght; counter++)

		dest[counter] = src[counter];

	dest[counter] = '\0';

	return (dest);
}
