#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at the end
 * @head: head node
 * @str: string to add the list
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *f;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
