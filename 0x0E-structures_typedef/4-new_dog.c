#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, len1, len2;
dog_t *n_dog;
char *a, *b;
len1 = 0;
for (i = 0; name[i] != '\0'; i++)
len1++;
len2 = 0;
for (i = 0; owner[i] != '\0'; i++)
len2++;
n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
return (NULL);
a = malloc((len1 + 1) * sizeof(char));
if (a == NULL)
{
free(n_dog);
return (NULL);
}
for (i = 0; i < len1; i++)
a[i] = name[i];
a[i] = '\0';
n_dog->name = a;
n_dog->age = age;
b = malloc((len2 + 1) * sizeof(char));
if (b == NULL)
{
free(a);
free(n_dog);
return (NULL);
}
for (i = 0; i < len2; i++)
b[i] = owner[i];
b[i] = '\0';
n_dog->owner = b;
return (n_dog);
}
