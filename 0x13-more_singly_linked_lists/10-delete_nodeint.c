#include "lists.h"
/**
 * delete_nodeint_at_index -deletes the node at index index of a listint_t.
 * @head: pointer to a pointer
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *ptr, *now;
unsigned int i;
ptr = *head;
now = NULL;
i = 0;
if (*head == NULL)
return (-1);
else
{
if (index == 0)
{
*head = (*head)->next;
free(ptr);
return (1);
}
while (i < index - 1)
{
while (ptr == NULL || ptr->next == NULL)
return (-1);
ptr = ptr->next;
i++;
}
now = ptr->next;
ptr->next = now->next;
free(now);
}
return (1);
}

