#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: minimum range
 *@max: maximum range
 *Return: pointer
 */
int *array_range(int min, int max)
{
int size, array;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);
for (i = 0; i < size; I++)
{
array[i] = min + 1;
}
return (array);
}
