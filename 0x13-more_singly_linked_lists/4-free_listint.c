#include "lists.h"
/**
 *free_listint - free a listint list
 *@head: pointer
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
