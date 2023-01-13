#include"main.h"
#include<string.h>
/**
 *str_concat - program to concatinate two strings
 *@s1: first string
 *@s2: Second string
 *Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *result, s1, s2;
int len1, len2, total_len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = ""
len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2 + 1;
result = malloc(total_len *sizeof(char));
if (result == NULL)
return (NULL);
strcpy(result, s1);
strcat(result, s2);
return (result);
free(result);
}
