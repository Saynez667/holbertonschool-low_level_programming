#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_node - Adds a new node at the beginning of a list_t list.
*@head: A pointer to the pointer of the first node.
*@str: The string to be added to the new node.
*Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str) 
{
list_t *new_node;
char *new_str;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_str = strdup(str);
if (!new_str)
{
free(new_node);
return (NULL);
}
new_node->str = new_str;
new_node->len = strlen(new_str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
