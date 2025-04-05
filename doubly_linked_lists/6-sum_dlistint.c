#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *cur = head;
	int sum = 0;

	while (cur != NULL)
	{
		sum += cur->n;

		cur = cur->next;
	}
	return (sum);
}
