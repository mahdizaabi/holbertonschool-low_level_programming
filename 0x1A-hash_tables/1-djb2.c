#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 hash function
 * @str: string entry which represent the key to generate the index
 *
 * Return: hash function value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
