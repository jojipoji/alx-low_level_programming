#include "main.h"
/**
 *factorial -  factorial of a given number.
 *@n: the number to be used
 *Return: factorial or -1
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n > 0)
return (n * factorial(n - 1));
return (1);
}
