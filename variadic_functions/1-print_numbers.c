#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers - function that prints numbers, followed by a new line.
  *
  *@separator:  is the string to be printed between numbers
  *
  *@n: is the number of integers passed to the function
  *
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (; i < n; i++)
	{

		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
