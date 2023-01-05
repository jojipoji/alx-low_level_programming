#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *@x: value to be raised
 *@y: power to raise x with
 *Return: if y islower than 0 returns -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
{
return(x * _pow_recursion(x, y - 1));
}
return (1);
}
