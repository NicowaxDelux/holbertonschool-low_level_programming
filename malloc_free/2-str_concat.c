#include "main.h"
#include <stdlib.h>
/**
  *str_concat - Write a function that concatenates two strings
  *
  *@s1: string 1
  *@s2: string 2
  *
  *Return: The function should return NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i1, j2, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i1 = 0; s1[i1] != '\0'; i1++)
		;
	for (j2 = 0; s2[j2] != '\0'; j2++)
		;

	a = malloc((i1 * sizeof(*s1)) + (j2 * sizeof(*s2)) + 1);

	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i1 + j2 + 1); c++)
	{
		if (c < i1)
			a[c] =  s1[c];

		else
			a[c] = s2[d++];
	}

	return (a);
}
