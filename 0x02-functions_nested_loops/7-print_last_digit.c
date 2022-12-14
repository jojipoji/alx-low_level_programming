#include "main.h"
/**
 *print_last_digit - printing last digit
 *Return: value of the last digit
 *@n: The character in question.
 */
int print_last_digit(int n)
{
int j = n % 10;
if (j < 0)
j *= -1;
putchar(j + '0');
return (j);
}
