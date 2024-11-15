#include "dog.h"
#include <stddef.h>
/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog to initialize
* @name: Pointer to the name of the dog
* @age: Age of the dog
* @owner: Pointer to the owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
