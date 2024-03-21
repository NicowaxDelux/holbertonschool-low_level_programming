#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  *sum_them_all - function that returns the sum
  *of all its parameters.
  *
  *@n: values
  *
  *Return: return sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0, i = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);

		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
