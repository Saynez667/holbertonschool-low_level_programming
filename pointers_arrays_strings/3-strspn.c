#include "main.h"
#include <stdio.h>
/**
* _strspn - Gets the length of a prefix substring
* @s: The string to be scanned
* @accept: The string containing the characters to match
*
* Return: The number of bytes in the initial segment of s
*         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_accept;
char *a;
while (*s)
{
is_accept = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
is_accept = 1;
break;
}
}
if (is_accept == 0)
break;
count++;
s++;
}
return (coun)t;
}
