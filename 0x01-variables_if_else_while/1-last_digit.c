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
last_num = n%10
printf("last digit of %d is %d ", n,last_num)
if (last_num > 5)
{
printf("and is greater than 5\n", n);
}
else if (last_num == 0)
{
printf("and is 0\n", n);
}
else (last_num < 6 && last_num != 0)
{printf("and is less than 6 and not 0\n", n);
}
return (0);
}
