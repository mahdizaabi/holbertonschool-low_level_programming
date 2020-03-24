#include "lists.h"

/**
 * print_listint -  print elements of a listint_t list.
 * @h: Head pointer
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
