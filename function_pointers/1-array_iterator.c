#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - function that executes a function given
  * as a parameter on each element of an array.
  *
  *@array: array to print
  *@size: array size
  *@action: pointer to the function
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)

		action(array[i]);
}
