#include "main.h"
/**
* puts_half - Prints half of a string
* @str: The string to print
*/
void puts_half(char *str)
{
int length = 0;
int start;
while (str[length] != '\0')
{
length++;
}
start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
