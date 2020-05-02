#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a linked list
 * @head: a pointer to the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *the_punisher;

	while (head)
	{
		the_punisher = head->next;
		free(head);
		head = the_punisher;
	}
}
