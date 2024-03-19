#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - Write a function that prints a name.
  *
  * @name: address of name
  *
  * @f: funtion
  */
void print_name(char *name, void (*f)(char *))
{
	void (*a)(char *) = f;

	a(name);
}
