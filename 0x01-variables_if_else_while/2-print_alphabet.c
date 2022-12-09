#include <stdio.h>
#include <stdlib.h>
/**
*main - prints characters a-z in small letters
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
putchar('\n');
return(0);
}
