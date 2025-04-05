#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
