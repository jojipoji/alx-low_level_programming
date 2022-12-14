#include "main"
/**
 *_isalpha - a function that checks for alphabetic character.
 *Return: 1 if c is a letter, lowercase or uppercase otherwise returns 0.
 *@c: character checked.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
