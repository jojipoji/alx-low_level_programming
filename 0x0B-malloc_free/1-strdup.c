#include "main.h"
#include <stdlib.h>
#include<string.h>
/**
*_strdup - returns a pointer to a newly allocated space
*@str: string to be checked
*Return: null and value of string
*/
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
int len = strlen(str);
char *dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
return (NULL);
strcpy(dup, str);
return (dup);
}
