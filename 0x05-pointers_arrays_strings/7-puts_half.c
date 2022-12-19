#include "main.h"
#include <string.h>
/**
 *puts_half - prints half a string
 *@str: character to be printed
 */
void puts_half(char *str)
{
int i, len = strlen(str);
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
