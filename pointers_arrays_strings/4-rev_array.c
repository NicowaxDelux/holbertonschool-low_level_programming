#include "main.h"
/**
  * reverse_array - function that reverses
  *the content of an array of integers
  *
  *@a:array
  *@n:number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = n - 1; i >= n / 2 ; i--)
	{

		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
