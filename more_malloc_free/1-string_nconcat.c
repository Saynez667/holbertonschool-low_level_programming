#include <stdlib.h>
/**
*string_nconcat - Concatenates two strings with at most n bytes from s2.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes to include from s2.
* Return: A pointer to the newly allocated space containing s1 followed by
*the first n bytes of s2 (or the entire s2 if n >= length of s2),
*null-terminated. Returns NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i, j, len1 = 0, len2 = 0;
if (s1 != NULL)
while (s1[len1])
len1++;
if (s2 != NULL)
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < n; j++)
result[i + j] = s2[j];
result[i + j] = '\0';
return (result);
}
