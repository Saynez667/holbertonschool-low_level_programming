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

    int i, j, k;

    for (i = 1; i <= size; i++)
    {
        for (j = size - i; j > 0; j--)
        {
            _putchar(' ');
        }
        for (k = 0; k < i; k++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
