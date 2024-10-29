#include "main.h"
/**
* print_triangle - prints a triangle of size 'size'
* @size: the size of the triangle
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 1; i <= size; i++)
{
for (int j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (int k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');

}
