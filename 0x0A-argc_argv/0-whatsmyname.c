#include <stdio.h>
#define unused (x) (void)(0)
/**
 *Main - main function
 *@argc: arguments count
 *@argv: arguments vector
 *Return: Always o
 */
int main(int argc, char*argv[])
{
  unused(argc);
  printf("%s\n", argv[0]);
  return (0);
}
