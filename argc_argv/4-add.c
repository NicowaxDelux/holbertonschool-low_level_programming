#include <stdio.h>
#include <stdlib.h>
/**
  * main - Write a program
  * that adds positive numbers.
  *
  *@argc: number of command line arguments
  *@argv: containing the program command line arguments
  *
  * Return: If one of the number contains symbols that are not digits,
  * print Error, followed by a new line, and return 1
  *
  *
  */
int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if ((argv[i][0] != '0') && (atoi(argv[i]) == 0))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
