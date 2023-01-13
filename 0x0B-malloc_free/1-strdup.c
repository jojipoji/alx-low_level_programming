#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space
*@str: string to be checked
*Return: null and value of string
*/
char *_strdup(char *str)
{
int i;
int a = 0;
char *c;
if (str == NULL)
return (NULL);
while (str != '\0')
i++;
c = malloc (sizeof(char) * a + 1;
if (c == NULL)
return (NULL);
for (i = 0; i < a; i++)
c[i] = str[i];
return (c);
}