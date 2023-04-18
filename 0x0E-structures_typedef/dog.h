#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define the following elements
 * @name: name of a dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - new type as a new name of struct dog.
*/
typedef struct dog dog_t;
#endif
