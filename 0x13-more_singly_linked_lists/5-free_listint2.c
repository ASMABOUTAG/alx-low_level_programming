#include "lists.h"
/**
 * free_listint2 - t frees a listint_t list
 * @head: pointer to pointer.
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
return;
else
{
while (ptr != NULL)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
head = NULL;
}
}
