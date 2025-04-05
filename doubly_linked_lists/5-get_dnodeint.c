#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return (starting from 0)
 *
 * Return: Pointer to the node at the specified index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *cur = head;
	unsigned int i = 0;

	while (cur != NULL)
	{
		if (i == index)
		{
			return (cur);
		}
		cur = cur->next;
		i++;
	}
	return (NULL);
}
