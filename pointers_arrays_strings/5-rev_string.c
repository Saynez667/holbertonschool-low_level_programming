#include <string.h>
#include "main.h"
/**
* rev_string - Reverses a string
* @s: The string to be reversed
*/
void rev_string(char *s)
{
int length = strlen(s);
int i;
char temp;
while (s[length] != '\0')
{
length++;
}
end = length - 1;
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
