#include "hash_tables.h"

/**
 * key_index - function to find the index after Hashing the Key .
 * @key: key of the socket
 * @size: size of the hash table
 *
 * Return: return the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
