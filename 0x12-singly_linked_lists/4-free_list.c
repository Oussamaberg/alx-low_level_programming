#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Free list elements .
 * @head: The list_t list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}

}
