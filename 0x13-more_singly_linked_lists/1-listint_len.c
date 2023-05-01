#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Return the number of elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);

}
