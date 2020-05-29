#include "hash_tables.h"
/**
 * hash_table_create - Function to create and intialize an empty hash table
 * @size: size of the hash table
 * Return: pointer to the created Hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptotable;
	unsigned long int i = 0;

	ptotable = malloc(sizeof(hash_table_t));
	if (ptotable == NULL)
		return (NULL);

	ptotable->size = size;
	ptotable->array = malloc(sizeof(hash_node_t) * size);

	while (i < ptotable->size)
	{
		ptotable->array[i] = NULL;
		i++;
	}
	return (ptotable);
}
