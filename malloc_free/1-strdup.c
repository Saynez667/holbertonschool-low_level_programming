#include <stdlib.h>
#include <string.h>
/**
*_strdup - Duplique une chaîne de caractès
*@str: La chaîne de caractères à duplir
* Return: Un pointeur vers la nouvelle chaîne dupliqué
*ou NULL si l'allocation échoue ou si str est NUL
*/
char *_strdup(char *str)
{
char *duplicate;
size_t length, i;
if (str == NULL)
return (NULL);
length = 0;
while (str[length] != '\0')
length++;
duplicate = malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; i < length; i++)
duplicate[i] = str[i];
duplicate[length] = '\0';
return (duplicate);
}
