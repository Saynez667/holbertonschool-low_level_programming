#include <stdlib.h>
#include "dog.h"
/**
* free_dog - Libère la mémoire allouée pour un chien
* @d: Pointeur vers la structure dog à libérer
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
