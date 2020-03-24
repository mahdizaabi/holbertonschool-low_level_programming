#include "lists.h"

/**
 * sum_listint - returns the sum of all the data stored on linked list
 * @head: pointer to the first elemnt of the list
 *
 * Return: sum of the stored data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
