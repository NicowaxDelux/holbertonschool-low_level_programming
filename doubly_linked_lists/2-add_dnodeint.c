#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - function that adds a new node
  * at the beginning of a dlistint_t list.
  *
  * @head: pointer to pointer for modify the head list
  *
  * @n: number passed as argumnet
  *
  * Return: new node
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
