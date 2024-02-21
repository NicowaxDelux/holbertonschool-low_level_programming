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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf(" is zero\n");
	}
	else
	{
		if (n < 0)
			printf(" is negative\n");
		else
		{
			printf(" is positive\n");
		}
	}
	return (0);
}
