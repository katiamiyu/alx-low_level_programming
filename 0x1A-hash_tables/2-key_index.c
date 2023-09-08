#include "hash_tables.h"

/**
 * key_index - finds the key index
 * @key: key to an index
 * @size: array size of hash table
 * Return: index of found key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh_code;

	if (key == NULL || size == 0)
		return (0);

	hsh_code = hash_djb2(key);

	return (hsh_code % size);
}
