#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - release allocated memory
 * @head: pointer to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *empty;

	while (head != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
}
