#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print if the number is positive, negative or 0
 *Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("is positive \n");
}
else if (n==0)
{
printf("is zero \n");
}
else
{
printf("is negative \n");
}
return 0;
}
