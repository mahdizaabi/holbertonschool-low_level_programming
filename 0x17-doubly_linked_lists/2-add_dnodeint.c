#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: a pointer to the first element of the list
 * @n: Data to store in the linked list
 *
 * Return: (Success) a pointer to the newly add node
 * ------- (Fail) return a NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
		return (new);
}
