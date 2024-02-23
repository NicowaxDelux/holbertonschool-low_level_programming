#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char alphabet_letter = '\0';
	int counter = 0;

	for (counter = 0; counter < 10; counter++)
	{
		for (alphabet_letter = 'a'; alphabet_letter <= 'z'; alphabet_letter++)
		{
			_putchar(alphabet_letter);
		}
		_putchar('\n');

	}
}
