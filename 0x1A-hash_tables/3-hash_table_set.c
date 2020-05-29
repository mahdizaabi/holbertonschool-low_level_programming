#include "hash_tables.h"
/**
 * noode_insert - function to insert new node
 * @key: key entry
 * @value: value to store
 * Return: pointer to the newly created node
**/
hash_node_t *node_insert(const char *key, const char *value)
{
	hash_node_t *ptonode;
	char *dupk, *dupv;

	ptonode = malloc(sizeof(hash_node_t));
	if (ptonode == NULL)
	{
		return (NULL);
	}
	dupk = strdup(key);
	dupv = strdup(value);
	if (dupv == NULL || dupk == NULL)
	{
		free(ptonode);
		return (NULL);
	}
	ptonode->key = dupk;
	ptonode->value = dupv;
	ptonode->next = NULL;
	return (ptonode);
}
/**
 * hash_table_set - insert a key to a value in the hash table
 * @ht: pointer to the hashtable
 * @key: key entry corresonding to the value
 * @value: value entry to store
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ptonode;
	hash_node_t *temp;


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
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
				{
					return (0);
				}
				return (1);
			}
			temp = temp->next;
		}
	else
	{

		ptonode = node_insert(key, value);
		if (ptonode == NULL)
		{
			return (0);
		}
		ptonode->next = ht->array[index];
		ht->array[index] = ptonode;
	}	return(1);
}
