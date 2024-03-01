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

	int i = 0;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];


	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
