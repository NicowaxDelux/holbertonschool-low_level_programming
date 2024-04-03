#include "lists.h"
#include <stdlib.h>
/**
  * free_list - function that frees a list_t list.
  *
  * @head: head of the linked list
  *
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
