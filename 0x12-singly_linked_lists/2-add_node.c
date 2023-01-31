#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *add_node - function to add nodes
 *@head: first/head address
 *@str: string to be duplicated
 *Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
