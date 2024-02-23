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

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

			if (num < 9)
			{

				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
