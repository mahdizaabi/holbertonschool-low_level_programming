#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to the beginning of a listint_t list
 * @n: integer data
 *
 * Return: pointer to the new created nod .
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	if (head == NULL)
		return (NULL);
	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);
	nod->n = n;
	nod->next = *head;
	*head = nod;
	return (nod);
}
