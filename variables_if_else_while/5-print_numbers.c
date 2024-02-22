#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Prints all single digit numbers of base 10 starting from 0
*
* Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		printf("%d", num);

	printf("\n");

	return (0);
}
