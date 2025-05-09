#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t count = 0;
	const dlistint_t *cur = h;

	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return (count);
}
