#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: pointer to a char.
 * @age: a number
 * @owner: pointer to char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
if (d == NULL)
d = malloc(sizeof(struct dog));
}


