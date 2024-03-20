#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - funtion that return sum
  *@a: num1
  *@b: num2
  *
  *Return: return sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - funtion that return subtraction
  *
  *@a: num1
  *@b: num2
  *Return: return subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - funtion that return product
  *
  *@a: num1
  *@b: num2
  *
  *Return: return product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - funtion that return division
  *
  *@a: num1
  *@b: num2
  *
  *Return: return division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  *op_mod -  funtion that return remainder of the division
  *
  *@a: num1
  *@b: num2
  *
  *Return: return remainder of the division
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
