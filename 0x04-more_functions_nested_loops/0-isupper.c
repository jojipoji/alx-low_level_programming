#include "main.h"
/**
 *_isupper - prints c if its upper case
 *@c: the charcter to be checked.
 *Return: 1 if c is uppercase else return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
