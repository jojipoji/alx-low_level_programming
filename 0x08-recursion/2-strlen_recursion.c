#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *
 *@s: string length
 *Return : length of a string
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s)
{
n = _strlen_recursion(s + 1);
return (n += 1);
}
return (0);
}
