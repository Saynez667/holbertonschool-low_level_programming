#include <stdio.h>
/**
* print_name - Prints a name using a provided function
* @name: The name to be printed
* @f: A pointer to the function that will print the name
*
* This function takes a name and a function pointer as parameters.
*It calls the provided function to print the name if both parameters are valid
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
else
{
return;
}
}
