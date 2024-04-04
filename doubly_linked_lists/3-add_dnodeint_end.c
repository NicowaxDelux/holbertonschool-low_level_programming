#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - function that adds a new node
  * at the end of a dlistint_t list.
  *
  * @head: head list
  *
  * @n: number passed by argument
  *
  *Return: return the address of the new element
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	new_node->prev = NULL;

	last_node = *head;

	if (last_node == NULL)

		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;

	}
	return (*head);
}
