#include "hash_tables.h"
/**
 * key-index - a function for the index at which the key pairs
 * shoul ne sttoed in the hash table arrar
 * @key: key to get the index
 * @size: size of the array in the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
