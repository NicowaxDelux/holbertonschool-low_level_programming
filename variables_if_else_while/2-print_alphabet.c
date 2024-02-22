#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);

		abc++;
	}
	putchar('\n');

	return (0);
}
