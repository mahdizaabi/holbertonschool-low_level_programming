#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a new nod at given index
 * @h: Head pointer to the first Node
 * @idx: given index
 * @n: data to be stored
 * Return: pointer to the new node
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *cmp;
	unsigned int i = 0;
	unsigned int j = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	cmp = *h;
	while (cmp != NULL)
	{
		cmp = cmp->next;
		j++;
	}
	if (idx == j)
		return (add_dnodeint_end(h, n));
	if (idx > j)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	new->n = n;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	return (new);
}
