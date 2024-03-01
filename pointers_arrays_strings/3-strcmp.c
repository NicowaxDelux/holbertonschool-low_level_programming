#include "main.h"
/**
  *_strcmp - function that compares two strings.
  *
  *@s1: a string
  *@s2: a string
  *
  *Return: return the conditions of comparation
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
