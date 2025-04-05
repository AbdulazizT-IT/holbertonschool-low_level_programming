#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: The integer data to be inserted in the new node.
 *
 * Return: The address of the new node, or NULL if it failed or the index is
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *cur = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (cur != NULL)
	{
		if (i == idx)
		{
			dlistint_t *newNode = malloc(sizeof(dlistint_t));

			if (!newNode)
			{
				return (NULL);
			}
			newNode->n = n;

			newNode->next = cur;
			newNode->prev = cur->prev;

			if (cur->prev != NULL)
			{
				cur->prev->next = newNode;
			}
			cur->prev = newNode;

			return (newNode);
		}
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}

