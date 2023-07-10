#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints the contemt of a list
 * @h: given list
 * Return: length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
}
