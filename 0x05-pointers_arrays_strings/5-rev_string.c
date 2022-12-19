#include "main.h"
#include <string.h>
/**
 *rev_string - Reverses a string
 *@s: character to be printed
 */
void rev_string(char *s)
{
int i, j, len = strlen(s);
char temp;
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
