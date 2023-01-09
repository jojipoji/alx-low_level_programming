#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int j, i, sum = 0;
for (j = 1; j < argc; j++)
{
for (i = 0; argv[j][i]; i++)
{
if (argv[j][i] < '0' || argv[j][i] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[j])
}
printf("%d\n");
return (0);
}
