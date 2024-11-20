#include <stddef.h>

/**
* int_index - Recherche un élément dans un tableau selon un critère spécif
* @array: Le tableau d'entiers à parcouri
* @size: Le nombre d'éléments dans le table
* @cmp: Un pointeur vers une fonction de comparaison
* Description:
* - Parcourt le tableau et cherche le premier élément pour lequel
*la fonction de comparaison ne retourne pas
*Return:
*- L'index du premier élément satisfaisant le critère
*- -1 si aucun élément ne correspond ou en cas d'erreur
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((size <= 0) | (array == NULL) | (cmp == NULL))
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
