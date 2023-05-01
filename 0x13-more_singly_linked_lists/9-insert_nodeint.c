#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- Insert an element by index.
 * @head: The list_t list.
 * @idx: index.
 * @n: int.
 * Return:an element.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *new;
	listint_t *element;

	element = *head;
	new = malloc(sizeof(listint_t));
	if (!new || !head || !*head)
	{
		return (NULL);
	}
	while (element)
	{
		if (index == (idx - 1))
		{
			new->n = n;
			new->next = element->next;
			element->next = new;
			return (new);
		}
		index++;
		element = element->next;
	}
	return (NULL);

}
