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


size_t print_list(const list_t *h);

#endif
