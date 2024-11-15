#include <stdlib.h>
#include <string.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: The string to duplicate.
* Return: A pointer to the duplicated string, or NULL if it fail.
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
