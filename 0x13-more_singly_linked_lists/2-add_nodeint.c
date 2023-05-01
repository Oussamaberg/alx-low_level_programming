#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - addsnodes.
 * @head: The list_t list.
 * @n: Int:
 * Return: listint_t..
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);

}
