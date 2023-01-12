#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 *create_array - a function that creates an array of a char
 *@size: unsigned int size
 *@c: character
 *Return: char value
 */
char *create_array(unsigned int size, char c)
{
char *j;
unsigned int i;
if (size <= 0)
return (NULL);
j = malloc(sizeof(char) * size);
if (j == NULL)
return (NULL);
for (i = 0; i < size; i++)
j[i] = c;
return (j);
}
