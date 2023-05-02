#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: data
 * Return:  the nth node of a listint_t linked list or NULL.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int i;
i = 0;
if (ptr == NULL)
return (NULL);
else
{
while (ptr != NULL && i < index)
{
ptr = ptr->next;
i++;
}
}
return (ptr);
}

