#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of linked list
 * @head: pointer to the first element of the list
 * @index: the given index
 *
 * Return: (Success) a pointer to the nth node
 * ------- (Fail) return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	temp = head;
	for (i = 1; temp->next; i++)
	{
		temp = temp->next;
		if (i == index)
			return (temp);
	}
	return (NULL);
}
