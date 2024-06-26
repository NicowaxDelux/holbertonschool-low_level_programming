#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  *_strlen -  returns the length of a string.
  *
  *@str: value pointer
  *
  *Return: lenght of char str
  */
int _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)

		len++;

	return (len);
}

/**
  * add_node_end - function that adds a new node
  * at the end of a list_t list.
  *
  * @head: pointer to pointer for modify the head list
  *
  * @str: elements of the list
  *
  * Return: retunr the address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);

	new_node->next = NULL;

	last_node = *head;

	if (last_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return (*head);



}
