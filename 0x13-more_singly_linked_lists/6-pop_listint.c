#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element of the lsit .
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head)
		return (0);
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
