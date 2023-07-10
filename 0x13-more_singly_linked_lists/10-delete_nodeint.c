#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: first element in the list
 * @index: position node to delete
 * Return: 1 (Success), or -1 (Failled)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *active = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp == NULL || (temp->next) == NULL)
			return (-1);
		temp = temp->next;
		i += 1;
	}


	active = temp->next;
	temp->next = active->next;
	free(active);

	return (1);
}
