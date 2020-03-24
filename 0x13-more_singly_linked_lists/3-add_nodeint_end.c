#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer pointing to the first element of the list
 * @n: Data to be stored in the list
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnod;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);
	newnod->n = n;
	newnod->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	return (newnode);
}
