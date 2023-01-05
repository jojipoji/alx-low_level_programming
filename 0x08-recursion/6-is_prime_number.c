#include "main.h"
/**
 *helper - checks for a prime number
 *@n: the integer to be checked
 *Return: 1 if the integer is prime otherwise return 0
 */
int helper(int i, int n)
{
if (n % i == 0 && n != i)
return (0);
if (n % i != 0 && i < n)
return (helper(i + 1, n));
return (1);
}
/**
 * is_prime_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
int i = 2;
if (n < 2)
return (0);
return (helper(i, n));
}
