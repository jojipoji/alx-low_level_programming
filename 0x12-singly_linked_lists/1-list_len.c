#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *list_len - length of struct
 *@h: head node
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
