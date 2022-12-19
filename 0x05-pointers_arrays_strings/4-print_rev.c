#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: character to be printed
 */
void print_rev(char *s)
{
int i;
for (i = s - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
