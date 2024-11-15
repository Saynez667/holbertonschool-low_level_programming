#include <stdlib.h>
/**
* malloc_checked - Alloue de la mémoire de taille spécifi
* @b: La taille en octets de la mémoire à alloue
* Si malloc() échoue, le programme se termine avec le code 98
* réussit, un pointeur vers la mémoire allouée est retou
* Return: Un pointeur vers l'espace mémoire alloué, ou termi
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
{
exit(98);
}
return (ptr);
}
