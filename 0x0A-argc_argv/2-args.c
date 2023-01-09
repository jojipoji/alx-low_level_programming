#include <stdio.h>
#define unused(x) void(x)
/**
 *main - main function
 *@argc: arguments count
 *@argv: arguments vector
 *Return: Always 0
 */
int main(int argc, char argv[])
{
int i;
for (int i = 0; int i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
