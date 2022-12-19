#include "main.h"
/**
 *reset_to_98 - resets the value of n to 98.
 *@n: the character to be checked.
 *Return: Always 0
 */
void reset_to_98(int *n)
int main(void) {
int n = 402;
int *p = &n;
*p = 98;
printf("The value of n is %d\n", n);
return 0;
}
