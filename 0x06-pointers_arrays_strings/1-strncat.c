#include <string.h>
#include "main.h"
/**
 *_strncat - concatinates two sstrings using n bytes
 *
 *@dest: The destintion string
 *@src: the source string
 *@n: The numbe rof bytes contained in source
 *
 *Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
