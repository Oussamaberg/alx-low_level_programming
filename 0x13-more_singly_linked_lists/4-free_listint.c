#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Free list elements .
 * @head: The list_t list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
