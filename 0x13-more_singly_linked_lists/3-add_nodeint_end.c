#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a list.
 * @head: pointer to first element of the listint_t list
 * @n: data to be stored .
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	if (head == NULL)
		return (NULL);
	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);
	newnod->n = n;
	newnod->next = *head;
	*head = newnod;
	return (newnod);
}
