#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the length of elements of a list
 *
 * @h: pointer to a list
 *
 * Return: length of element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
