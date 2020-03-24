#include "lists.h"

/**
 * list_len - returns the number of node in a list
 * @h: a given lsit head
 *
 * Return: a length of the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		length++;
		h = h->next;
	}
	return (length);
}
