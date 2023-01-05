#include "main.h"
/**
 * guess - generates a random integer
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int guess(int i, int n)
{
int j;
if (1 * 1 != n)
{
if (i > n)
{
return (-1);
}
j = guess(1 + 1, n);
return (j + 1);
}
return (0);
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer to find square root
 *Return: returns -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (guess(i, n) == n && n != 1)
return (-1);
return (guess(i, n));
}
