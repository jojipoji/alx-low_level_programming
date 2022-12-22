#include "main.h"
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (_indexOf(s[i]))
continue;
if (s[i] >= 'a' && s[i] <= 'z' && (_indexOf(s[i - 1]) || i == 0))
s[i] = s[i] - 32;
}
return (s);
}
