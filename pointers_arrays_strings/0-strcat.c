#include "main.h"
/**
  *_strcat - function that concatenates two strings
  *
  *@dest: string dest
  *@src: string origin
  *
  *Returns: return string dest
  */
char *_strcat(char *dest, char *src)
{
	int count = 0, lenght = 0;

	while (dest[count++])

		lenght++;

	for (count = 0; src[count]; count++)

		dest[lenght++] = src[count];

	return (dest);	
}
