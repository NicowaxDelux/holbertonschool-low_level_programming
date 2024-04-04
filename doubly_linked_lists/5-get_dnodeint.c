#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - function that returns the nth 
  * node of a dlistint_t linked list.
  *
  * @head: head list
  *
  * @index: num of the node
  *
  *Return: return data of the node call
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if(head == NULL)
		return (NULL);



	while (head != NULL)
	{	
		if(count == index)
			return (head);
		count++;
		head = head->next;
	}
	return(head);
}
