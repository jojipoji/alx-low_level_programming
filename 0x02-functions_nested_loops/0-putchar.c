#include <stdio.h>
#include <main.h>
#include <_putchar.c>
#include <main.c>
/**
 *Main - a program that prints _putchar, followed by a new line
 *Return: Always 0
 */
int main(void)
{
int i;
char *s = "_putchar";
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n')
return (0);
}
