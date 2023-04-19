#include "dog.h"
#include "stdlib.h"
/**
 * free_dog - frees the memory reserved for struct dog.
 * @d: a pointer to struct dog.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
free((*d).name);
free((*d).owner);
}
}
