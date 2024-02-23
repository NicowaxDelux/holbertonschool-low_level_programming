#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a all the numbers of base 16 in lowercase
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int num = 0;

	while (num <= 15)
	{
		if (num < 10)

			putchar('0' + num);
		else

			putchar('a' + num - 10);

		num++;
	}
	putchar('\n');

	return (0);
}
