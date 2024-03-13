#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - creates an array of chars,initializes with specific char
  *
  *@size: size of the memory to print
  *@c: string0
  *
  *Return:a pointer to the array, or NULL if it fails or NULL if size = 0
  *
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;


	if (size == 0)

		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		printf("Error, no se pudo asignar memoria\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);

}
