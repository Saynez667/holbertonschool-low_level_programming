#include <stdlib.h>
/**
* array_range - Crée un tableau d'entiers contenant les valeurs de mi
* @min: La valeur minimale à inclure dans le tableau.
* @max: La valeur maximale à inclure dans le tableau.
* Return: Un pointeur vers le tableau créé, ou NULL si m
*/
int *array_range(int min, int max)
{
int *array;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
