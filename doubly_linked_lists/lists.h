#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

/**
 * struct list_s - Singly linked list.
 * @str: String data for the node.
 * @len: Length of the string.
 * @next: Pointer to the next node in the list.
 *
 * Description: This structure represents a node in a singly linked list.
 * It holds a string, its length, and a pointer to the next node.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_dlistint(const dlistint_t *h);
#endif
