#include "hash_tables.h"

/**
 * hash_table_print - prints the while h table
 * @ht: pointer to the hashtable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int x = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (x != 1 && x != x - 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);

			temp = temp->next;
			x += 1;
		}
	}
	printf("}\n");
}
