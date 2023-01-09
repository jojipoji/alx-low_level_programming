#include <stdio.h>
#define unused(x) (void)(x)
/**
 *main - main function
 *@argc: arguments count
 *@argv: arguments vecta
 *Return: always 0
 */
int main(int argc, char *argv[])
{
unused(argv);
printf("%d\n", argc - 1);
return (0);
}
