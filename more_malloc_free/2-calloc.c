#include <stdlib.h>
#include <string.h>
/*
* _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
* @nmemb: Nombre d'éléments à allouer.
* @size: Taille de chaque élément en octets.
*
* Return: Un pointeur vers la mémoire allouée, ou NULL en cas d'erreur.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
