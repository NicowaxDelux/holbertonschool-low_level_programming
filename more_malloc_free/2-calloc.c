#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);

	if (a != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			a[i] = 0;
		return (a);

	}
	else
		return (NULL);
}
