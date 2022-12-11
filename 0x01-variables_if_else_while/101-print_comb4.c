#include <stdio.h>
/**
 *main prints all possible combinations of three digits
 *101combo digits
 *Return: Always 0
 */
int main(void)
{
int i, j, h;
for (i = 0; i < 8; i++)
for (j = i + 1; j < 9; j++)
for (h = j + 1; h < 10; h++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((h % 10) + '0');
if (i == 7 && j == 8 && h == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
