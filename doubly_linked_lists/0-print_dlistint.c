#include "lists.h"
/**
*print_dlistint - Prints all the elements of a doubly linked list
*print_list - prints all the elements of a list_t list
*@h: head of the list
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
