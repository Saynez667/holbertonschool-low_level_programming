#include <stdlib.h>
#include <string.h>
/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
*Return: A pointer to a newly allocated space in memory containing
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1, len2, total_len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2;
concat = malloc(sizeof(char) * (total_len + 1));
return (NULL);
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}