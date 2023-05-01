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

	n = (*head)->n;
	*head = (*head)->next;
	return (n);

}
