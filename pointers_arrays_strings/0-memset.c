#include "main.h"
/**
  *_memset - fills memory with a constant byte.
  *
  *@s: pointer to fill
  *@b: new element
  *@n: the number of bytes to fill
  *
  *Return: returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
