#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Write a function that allocates memory using malloc.
  *
  *@b: size memory  allocate
  *
  *Return: Returns a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)

		exit(98);

	return (a);
}
