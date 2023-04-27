#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - addsnodes.
 * @head: The list_t list.
 * @str: String:
 * Return: list_t..
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);

}
