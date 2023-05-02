#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n) of a listint_t.
 *@head: pointer
 *Return: sum
*/
int sum_listint(listint_t *head)
{
listint_t *ptr = head;
int sum;
sum = 0;
while (ptr != NULL)
{
sum = sum + ptr->n;
ptr = ptr->next;
}
return (sum);
}
