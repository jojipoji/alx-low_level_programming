#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory to an array
 *@nmemb: number of elements
 *@size: size of bytes
 *Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(nmemb * size);
if (s == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
s[i] = 0;
return (s);
}
