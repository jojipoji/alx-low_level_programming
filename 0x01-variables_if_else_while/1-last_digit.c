#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Assign a random number to the variable n each time it is executed.
 *Return: Always 0 (success)
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("n%10 and is greater than 5\n", n);
}
else if (n == 0)
{
printf("n%10 and is 0\n", n)
}
else (n < 6 AND != 0)
{printf("n%10 and is less than 6 and not 0\n", n);
}
 return (0);
}
