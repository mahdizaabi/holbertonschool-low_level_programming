#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of list
 * @h: pointer pointed to the head of the list
 *
 * Return: the number of the elements
 */

size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		length++;
		h = h->next;
	}
	return (length);
}
