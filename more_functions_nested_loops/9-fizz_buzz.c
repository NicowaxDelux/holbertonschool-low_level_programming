#include <stdio.h>
/**
  * main - prints the numbers from 1 to 100
  *
  * Return: prints the numbers from 1 to 100, followed by a new line.
  * but for multiples of three print Fizz instead of the number
  * and for the multiples of five print Buzz
  * for numbers which are multiples of both three and five print FizzBuzz
  *
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)

			printf("FizzBuzz");

		else if (number % 3 == 0)

			printf("Fizz");

		else if (number % 5 == 0)

			printf("Buzz");
		else
			printf("%d", number);

		if (number == 100)

			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
