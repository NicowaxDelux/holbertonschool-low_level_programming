#include "main.h"
#include <stdio.h>
/**
  *print_array - prints n elements of an array of integers
  *
  *@a: is array
  *@n: numbers of elements of the array
  */
void print_array(int *a, int n)
{
	int counter;


	for (counter = 0; counter < n; counter++)
	{

		if (counter == 0)

			printf("%d", a[counter]);
		else
			printf(", %d", a[counter]);
	}
	printf("\n");

}
