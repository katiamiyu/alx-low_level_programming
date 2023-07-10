#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - attaching a new node at head of list
 *
 * @head: pointer to a pointer
 * @str: string input
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int x = 0;

	while (str[x] != '\0')
		x += 1;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = x;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
