#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(int c);
/**
 * struct node - singly linked list
 * @str: a string
 * @len: string's length
 * @next: to the next node.
*/

typedef struct node
{
char *str;
unsigned int len;
struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
