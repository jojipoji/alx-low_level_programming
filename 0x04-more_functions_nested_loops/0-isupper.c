#inclde "main.h"
/**
 *_isupper - prints c if its upper case
 *Returns: 1 if upper or 0 if otherwise
 *@c: the charcter to be checked.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
