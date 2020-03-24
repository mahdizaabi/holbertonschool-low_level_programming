#include "lists.h"

/**
 *free_list - Write a function that frees a list_t list.
 *@head: pointer pointed to the start of the list .
 *Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
