#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar('x' + (num % 10));

			if (num == 9)
			{
				continue;

				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
