#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new;
	dlistint_t *temp;
	int i = 1;

	if(h = NULL)
		return(NULL);
	if(idx < 1)
		return(NULL);

	if(idx == 1)
		return(add_dnodeint(&head,n));


		new = (dlistint_t *)malloc(sizeof(dlistint_t));
		if(new == NULL)
			return(NULL);
		temp = *head;
		new->n = n;
		while(i < index-1)
		{
			temp = temp->next;
			i++;
		}
	new->prev=temp;
	new->next =temp->next;
	temp->next=new;
	new->next->prev=new;
}
