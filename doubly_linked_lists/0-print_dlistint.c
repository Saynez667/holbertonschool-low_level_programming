#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: head of the list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", h->str);
		}
		printf("\n");
		count++;
		h = h->next;
	}
	return (count);
}
