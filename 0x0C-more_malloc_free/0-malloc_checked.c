#include "main.h"
/**
 *malloc_checked - a function to allocate memory
 *@b: unsigned integer
 *Return: a pointer pr void
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
