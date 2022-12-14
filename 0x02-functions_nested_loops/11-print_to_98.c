#include <stdlib.h>
#include "main.h"
/**
 *print_to_98 - a function that prints all natural numbers from n to 98.
 *@n: start of the number to be printed.
 *Return: Always 0
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i <= 98; i++)
{
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
