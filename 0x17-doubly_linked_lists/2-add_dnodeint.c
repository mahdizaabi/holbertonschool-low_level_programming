#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: a pointer to the linked list
 * @n: a given integer of the new node
 *
 * Return: (Success) a pointer to the newly add node
 * ------- (Fail) return a NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if(new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	new->prev = NULL;
	*head = new;
		return (new);
}
