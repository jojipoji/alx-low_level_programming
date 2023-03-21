#include "main.h"
/**
 *_islower - a function that checks for lowercase character.
 *Return: 1 if c is lowercase or 0 if uppercase.
 *@c: cahracter to be checked.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
