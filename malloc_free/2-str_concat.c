#include <stdlib.h>
#include <string.h>
/**
* str_concat - Concatenates two strings into a new memory location.
* @s1: The first string.
* @s2: The second string.
* Return: A pointer to the newly allocated space in memory containing the
*concatenated strings, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *result;
int i, j, len1 = 0, len2 = 0;
if (s1 != NULL)
while (s1[len1])
len1++;
if (s2 != NULL)
while (s2[len2])
len2++;
result = malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
