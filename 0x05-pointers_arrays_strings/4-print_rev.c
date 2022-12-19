#include "main.h"
#include <string.h>
#include <strlen.h>
/**
 *print_rev - prints a string in reverse
 *@s: character to be printed
 */
void print_rev(char *s)
{
int i, len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
