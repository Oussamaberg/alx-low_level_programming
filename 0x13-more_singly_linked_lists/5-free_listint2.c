#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Free list elements .
 * @head: The list_t list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
