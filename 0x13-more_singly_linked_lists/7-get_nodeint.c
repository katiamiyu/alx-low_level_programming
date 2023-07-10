#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - find a member of a list
 * @head: linked list top
 * @index: position of the member
 * Return: member (success) or NULL (failed)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i += 1;
	}

	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
