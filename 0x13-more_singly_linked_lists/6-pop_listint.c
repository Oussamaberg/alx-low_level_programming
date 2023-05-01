#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Pop the first element.
 * @head: The list_t list.
 *
 * Return: The value of the first element.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;
	
	if(!head || !*head)
		return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);

}
