#include "main.h"
#include <stdio.h>
#include <unistd.h>


/* more headers goes there */
/**
 * main - Prints a _putchar, followed by a new line.
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);

	return (0);
}
