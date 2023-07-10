#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node to endoflist
 *
 * @head: double pointer to list
 * @str: string input
 *
 * Return: address of node || null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;
	unsigned int x = 0;

	while (str[x] != '\0')
		x += 1;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = x;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
