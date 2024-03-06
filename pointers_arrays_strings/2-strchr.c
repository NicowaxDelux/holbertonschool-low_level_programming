#include "main.h"
/**
  *_strchr - function that locates a character in a string
  *
  *@s: A char string
  *@c: character of the string
  *
  *Return: Returns a pointer to the first occurrence of the character
  *c in the string s, or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
