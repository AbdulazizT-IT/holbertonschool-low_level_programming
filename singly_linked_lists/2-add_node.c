#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the pointer of the head of the list.
 * @str: The string to be duplicated and added as the new node's data.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode = malloc(sizeof(list_t));
	int length = 0;
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

