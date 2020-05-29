#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value associated with a key.
 * @key: key entry
 * @ht: pointer to the table
 * Return: the value ot 1 in fail
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || ht->array == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];


	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
