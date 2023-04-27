#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head : pointer to list_t.
 * Return: Nothing
*/
void free_list(list_t *head)
{
list_t *brave;
while (head)
{
brave = head->next;
free(head->str);
free(head);
head = brave;
}
}
