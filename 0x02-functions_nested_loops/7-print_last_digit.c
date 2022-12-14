#include "main.h"
/**
 *print_last_digit - printing last digit
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
int n = n % 10;
if (n < 0)
n *= -1;
putchar(n + '0');
return (n);
}
