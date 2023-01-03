#include "main.h"
/**
 *_memcpy - A function that copies bytes from memory area
 *@n: bytes to be copied
 *@src: source to be copied from
 *@dest: the destination after copying
 *
 *Return: a poiner to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
src [i] = dest[i];
}
return (dest);
}
