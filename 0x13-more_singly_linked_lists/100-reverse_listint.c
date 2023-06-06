#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * head: pointer to 1st node
 * Return: address of head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (0);

	node = *head;
	*head = 0;

	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
