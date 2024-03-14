#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Write a function that returns a pointer
  * to a 2 dimensional array of integers.
  *
  * @width: width of the grid
  * @height: height of the grid
  *
  *Return: The function should return NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);

			if (array[i] != NULL)
			{
				for (; j < width; j++)
				{
					array[i][j] = 0;
				}
			}
			else
			{
				if (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
