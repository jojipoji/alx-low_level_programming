#include "main.h"
/**
 *times_table - a function that prints the 9 times table, starting with 0.
 *Return: Always o
 */
void times_table(void)
{
int i;
for (int i = 0; i <= 9; i++)
{
_putchar('0' + i);
_putchar('*');
_putchar('9');
_putchar('=');
_putchar('0' + (i * 9));
_putchar('\n');
}
}
