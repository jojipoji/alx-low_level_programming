#include <stdio.h>
#include "main.h"
/**
 *_memset -  a function that fills a memory with a constant bytes
 *
 *@n:Size of bytes
 *@s: Memory area returned
 *@b:Constant byte
 *
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
