#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  *
  *@str: duplicated string
  *
  *Return: Returns NULL if str = NULL
  */
char *_strdup(char *str)
{
	char *a;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	a = (char *) malloc((length + 1) * sizeof(char));

	if (a == NULL)

		return (NULL);

	for (i = 0; i <= length; i++)

		a[i] = str[i];

	return (a);
}
