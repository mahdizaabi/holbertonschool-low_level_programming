#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - add nod at the end of the list
 * @head: pointer to the first nod of zee list
 * Return: the sum of all data
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *spiderman;

	if (head == NULL)
		return (0);
	spiderman = head;
	while (spiderman->next)
	{
		spiderman = spiderman->next;
		sum = sum + spiderman->n;
	}

	return (sum);
}

