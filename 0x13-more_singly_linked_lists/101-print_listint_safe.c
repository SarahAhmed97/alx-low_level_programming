#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers to the node in linked list
 * @list: old list to be appended
 * @size: size of new list (always 1 more than the old list)
 * @new: new node to be added to the list
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == 0)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to 1st node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = 0;

	while (head != 0)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
