#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer.
 * @str: string
 * Return: adress of str or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *add, *brave;
unsigned int len = 0;
brave = *head;
while (str[len])
len++;
add = malloc(sizeof(list_t));
if (!add)
{
return (NULL);
}
add->str = strdup(str);
add->len = len;
add->next = NULL;
if (*head == NULL)
{
*head = add;
return (add);
}
while (brave->next)
{
brave = brave->next;
}
brave->next = add;
return (add);
}
