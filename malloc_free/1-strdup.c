#include <stdlib.h>
#include <string.h>
/**
* _strdup - Duplique une chaîne de caractèr
* @str: La chaîne de caract�
* Description: Cette fonction alloue dynamiquement
* nouvelle chaîne qui est une copie exac
* - Alloue de l'espace mémoire avec malloc()
* - Copie le contenu de la chaîne original
* - Gère le cas où str est NL
* - Gère l'échec d'allocation mémo
* - Un pointeur vers la nouvelle chaîne dupliqu
*- NULL si str est NULL ou si l'allocation mémo
*/
char *_strdup(char *str)
{
char *duplicate;
size_t length;
if (str == NULL)
return (NULL);
length = strlen(str);
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
strcpy(duplicate, str);
return (duplicate);
}
