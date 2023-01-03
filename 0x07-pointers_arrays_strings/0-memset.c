#include "main.h"
/**
 *memset -  a function that fills a memory with a constant bytes
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
i = 0;
while
(i < n);
{
*(s + i) = b;
i += 1;
}
return (s);
}
