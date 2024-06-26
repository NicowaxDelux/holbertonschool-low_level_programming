#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  * add_node - function that adds a new node
  * at the beginning of a list_t list
  *
  * @head: pointer to pointer for modify the head list
  *
  * @str: elements of the list
  *
  * Return: retunr the address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
