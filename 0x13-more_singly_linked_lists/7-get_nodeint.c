#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Prints an element by index.
 * @head: The list_t list.
 * @index: index.
 * Return:an elemen.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t counter = 0;

	while (head)
	{
		if (index == counter)
		{
			return (head);
		}
		counter++;
		head = head->next;
	}
	return (NULL);

}
