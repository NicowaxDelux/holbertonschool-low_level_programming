#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *
 *@a:value of a
 *@b:value of b
 */
void swap_int(int *a, int *b)
{
	int number = *a;
	  *a = *b;
	  *b = number;
}
