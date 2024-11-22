#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - Sums all its parameters.
* @n: The number of parameters.
* Return: The sum of all parameters, or 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_start(args, n);
va_end(args);
if (n == 0)
return (sum);
}
