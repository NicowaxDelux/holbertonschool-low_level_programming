#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a abcdario menos la letra e y q
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'q' && abc != 'e')
			putchar(abc);
	}
	putchar('\n');

	return (0);
}
