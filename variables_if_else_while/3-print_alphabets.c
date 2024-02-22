#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Prints a alphabet
*
* Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
	char Abc;

	for (Abc = 'a'; Abc <= 'z'; Abc++)

		putchar(Abc);

	for (Abc = 'A'; Abc <= 'Z'; Abc++)

		putchar(Abc);

	putchar('\n');
	return (0);
}
