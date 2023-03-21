#include "main.h"
/**
 *_strchr - a function that locates a character in a string
 *@s: string to locate
 *@c: Character to find
 *
 *Return: character value
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + 1);
}
}
if (s[i] == c)
return (s + 1);
return (0);
}
