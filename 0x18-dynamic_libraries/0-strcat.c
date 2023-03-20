#include "main.h"
/**
 *_strcat - Concatinates two characters
 *
 *@dest: one of the strings
 *@src: one of the strings
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int j = 0, i = 0;
while (dest[j++])
i++;
for (j = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
