#include <ctype.h>
#include <stdlib.h>
/**
*main - prints characters a-z in small letters
*Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return(0)
}
