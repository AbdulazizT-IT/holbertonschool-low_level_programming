#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *cur = h;
	size_t count = 0;

	while (cur != NULL)
	{
		if (cur->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", cur->len, cur->str);
		}
		count++;
		cur = cur->next;
	}
	return (count);

}
