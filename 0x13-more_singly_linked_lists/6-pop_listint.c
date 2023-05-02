#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to a pointer.
 * Return: he head node’s data (n) or 0 if the linked list is empty.
*/
int pop_listint(listint_t **head)
{
int p;
listint_t *new = NULL;
if (head == NULL)
return (0);
new = (*head)->next;
p = (*head)->n;
free(*head);
*head = new;
return (p);
}
