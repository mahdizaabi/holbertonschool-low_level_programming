#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - insert a new nod at given index
 * @head: Head pointer to the first Node
 * @index: given index
 * Return: 0 on success -1 on failure
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head && head)
	temp = *head;
	{
		if (index == 0)
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
			temp = NULL;
			return (0);
		}
		while (temp != NULL)
		{
			temp = temp->next;
			if (i == index - 1)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				temp = NULL;
				return (0);
			}
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				temp = NULL;
				return (0);
			}
			i++;
		}
	}

	return (-1);
}

