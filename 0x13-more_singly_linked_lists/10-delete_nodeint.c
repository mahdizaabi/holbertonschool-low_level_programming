[B#include "lists.h"

/**
 *delete_nodeint_at_index - index of a listint_t linked list.
 *@head: pointer to the frist element of the list
 *@index: index of the deleted node .
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = NULL;
	listint_t *node;
	*node = *head;

	if (!*head)
		return (-1);

	if (!index)
	{
		tmp = node->next;
		free(node);
		node->next = tmp;

		return (1);
	}

	for (i = 0; i <= index; i++)
	{
		if (!node->next)
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	free(node);
	node->next = tmp;

	return (1);
}
