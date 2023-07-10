#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the top of a list
 * @head: pointer to the first element in the linked list
 * Return: data (success), 0 (empy)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
