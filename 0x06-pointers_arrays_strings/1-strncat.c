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
int dest_len = strlen(dest);
for (int i = 0; i < n && src[i] != '\0'; i++) {
dest[dest_len + i] = src[i];
}
dest[dest_len + n] = '\0';
return dest;
}
