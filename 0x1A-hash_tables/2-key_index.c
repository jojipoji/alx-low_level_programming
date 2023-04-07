#include "hash_tables.h"
/**
 * key_index - returns the index of the hashtable value
 * @key: key to be testd
 * @size: size of the hash table
 * Return: mode of the hashed key to size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
