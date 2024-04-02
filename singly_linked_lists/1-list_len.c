#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  *list_len - function that returns the number
  *of elements in a linked list_t list
  *
  *@h: elements
  *
  *Return: returns the numbers of elements
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
