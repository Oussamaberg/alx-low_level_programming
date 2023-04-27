#include <stdio.h>
#include "lists.h"

/**
 * list_len - Return number of nodes.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);

}
