#include "lists.h"

/**
 * list_len - Prints the length of the linked.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{

	const list_t *cur = h;
	size_t count = 0;

	while (cur != NULL)
	{
		if (cur->str == NULL)
		{
			return (1);
		}
		else
		{
			count++;
		}
		cur = cur->next;
	}
	return (count);
}
