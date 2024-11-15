#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
int count = 0;
while (s != NULL && *(s + count) != '\0')
count++;
return (count);
}
/**
* _strcpy - Copies a string, including the null-terminator, to another buffer.
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
*
* Return: Pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
/**
* new_dog - Creates a new dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
* Return: Pointer to the new dog structure, or NULL if there is an error
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int len_name, len_owner;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
len_name = _strlen(name);
new_dog->name = malloc(sizeof(char) * (len_name + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);
new_dog->age = age;
len_owner = _strlen(owner);
new_dog->owner = malloc(sizeof(char) * (len_owner + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->owner, owner);
return (new_dog);
}
