#include "lists.h"

/**
 * free_listint - free_listint
 * @head: pointer to 1st node
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
