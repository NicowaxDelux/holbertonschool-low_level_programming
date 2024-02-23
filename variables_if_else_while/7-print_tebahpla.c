#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)

		putchar(abc);

	putchar('\n');

	return (0);

}
