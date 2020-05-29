#include "hash_tables.h"
/**
 *
 *
 *
 *
**/
hash_node_t *node_insert(const char *key, const char *value)
{
	hash_node_t *ptonode;
	char *dupk, *dupv;

	ptonode = malloc(sizeof(hash_node_t));
	if (ptonode == NULL)
	{
		return(NULL);
	}
	dupk = strdup(key);
	dupv = strdup(value);
	if (dupv == NULL || dupk == NULL)
	{
		free(ptonode);
		return (NULL);
	}
	ptonode->key = dupk;
	ptnode->value = dupv;
	ptnode ->next = NULL;
	return (ptonode);

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ptonode;
	hash_node_t *temp;
	char *dup;

	if ((key == NULL) || (ht == NULL))
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (ht->array[index] != NULL)
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	else
	{
		ptonode = malloc(sizeof(hash_node_t));
		if (ptonode == NULL)
			return (0);
		dup = strdup(key);
		if (dup == NULL)
		{
			free(ptonode);
			return (0);
		}
		ptonode->key = dup;
		ptonode->value = strdup(value);
		if (ptonode->value == NULL)
		{
			free(ptonode->key);
			free(ptonode);
			return (0);
		}
		ptonode->next = ht->array[index];
		ht->array[index] = ptonode;
	}	return(1);
}
