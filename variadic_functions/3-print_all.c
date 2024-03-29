#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - Prints a char
 * @arg: Argument pointer
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_integer - Prints an integer
 * @arg: Argument pointer
 */
void print_integer(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float
 * @arg: Argument pointer
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Prints a string
 * @arg: Argument pointer
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list ap;
	char *separator = "";
	int i = 0, j = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(ap);
}
