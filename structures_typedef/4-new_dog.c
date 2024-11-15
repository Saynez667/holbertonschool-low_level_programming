#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* new_dog - Crée un nouveau chien
* @name: Le nom du chien
* @age: L'âge du chien
* @owner: Le propriétaire du chien
* Return: Un pointeur vers la nouvelle structure dog_t, ou NULL si l'éche
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
    {
        return (NULL);
    }

    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

    strcpy(new_dog->name, name);
    new_dog->age = age;
    strcpy(new_dog->owner, owner);

    return (new_dog);
}






