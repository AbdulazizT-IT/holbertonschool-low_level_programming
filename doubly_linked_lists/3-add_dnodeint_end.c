#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
		{

			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
