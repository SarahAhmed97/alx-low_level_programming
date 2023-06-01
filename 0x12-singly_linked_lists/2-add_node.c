#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer's address to head node
 * @str: str field of node
 * Return: size of int
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t n;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
