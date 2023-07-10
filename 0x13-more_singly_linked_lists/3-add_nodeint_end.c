#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds nod to endoflist
 * @head: list uploaded
 * @n: number to new list
 * Return: Null (failure) pointer (success)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *initial = *head;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (initial->next)
		initial = initial->next;

	initial->next = newnode;

	return (newnode);

}
