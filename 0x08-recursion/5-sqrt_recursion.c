#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer to find square root
 *Return: returns -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 2)
{
return (n);
}
int guess =  _sqrt_recursion(n - 1);
if (guess * guess == n)
{
return (guess);
}
else
{
return (-1);
}
}
