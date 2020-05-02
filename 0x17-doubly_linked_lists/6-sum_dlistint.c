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

	spiderman = head;
	while (spiderman)
	{
		sum += spiderman->n;
		spiderman = spiderman->next;
	}

	return (sum);
}

