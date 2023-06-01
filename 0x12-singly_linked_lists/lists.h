#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _strken(char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**
 * STRUCT LISTS_S - SINGLY LINKED LIST
 * @STR: STRING - (MALLOC STRING)
 * @LEN: LENGTH OF THE STRING
 * @next: points to the next node
 *
 * Return: 0
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
} lists_t;

#endif
