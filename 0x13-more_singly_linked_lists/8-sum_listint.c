#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - adds up the sum of node int
 * @head: the top node
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
