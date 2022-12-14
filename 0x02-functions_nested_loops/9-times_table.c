#include "main.h"
/**
 *times_table - a function that prints the 9 times table, starting with 0.
 *Return: Always o
 */
void times_table(void)
{
for (int i = 0; i <= 9; i++)
{
putchar('0' + i);
putchar('*');
putchar('9');
putchar('=');
putchar('0' + (i * 9));
putchar('\n');
}
}
