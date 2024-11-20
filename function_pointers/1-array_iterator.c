#include <stddef.h>
/**
* array_iterator - Executes a function on each element of an array
* @array: The array to iterate over
* @size: The size of the array
* @action: A pointer to the function to be executed on each element
*
* Description: This function applies the given action function to each
* element of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
if (array == NULL | size == 0)
{
return;
}
for (int i = 0; i < size; i++)
{
action(array[i]);
}
}
