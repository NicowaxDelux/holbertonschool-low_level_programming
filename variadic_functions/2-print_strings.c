#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - funtion that prints strings
  *
  * @separator: is the string to be printed between the strings
  *
  * @n: n is the number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");

}
