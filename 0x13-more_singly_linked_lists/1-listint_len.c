#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * listint_len - returns length of list
 * @h: the given list
 * Return: unsigned it (length)
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size += 1;
	}
	return (size);
}
