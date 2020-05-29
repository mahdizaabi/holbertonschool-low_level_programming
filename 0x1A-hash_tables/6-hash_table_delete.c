#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptonode, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptonode = ht->array[i];
			while (ptonode)
			{
				temp = ptonode->next;
				free(ptonode->key);
				free(ptonode->value);
				free(ptonode);
				ptonode = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
