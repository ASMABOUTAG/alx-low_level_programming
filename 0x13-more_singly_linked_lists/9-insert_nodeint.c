#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: pointer to a pointer
 *@idx: is the index of the list where the new node should be added.
 *@n: data
 *Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr, *temp;
unsigned int i;
i = 0;
ptr = malloc(sizeof(listint_t));
temp = *head;
if (ptr == NULL || head == NULL)
return (NULL);
else
{
ptr->n = n;
ptr->next = NULL;
if (idx == 0)
{
ptr->next = *head;
*head = ptr;
return (ptr);
}
while (temp != NULL && i < idx)
{
if (i == idx - 1)
{
ptr->next = temp->next;
temp->next = ptr;
return (ptr);
}
else
{
temp = temp->next;
}
i++;
}
}
return (NULL);
}
