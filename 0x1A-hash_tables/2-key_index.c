#ifndef KEY_INDEX_H
#define KEY_INDEX_H

#include "hash_tables.h"

/**
 * key_index - gives you index of a given key
 * @key: key to hash
 * @size: hash table size
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

#endif /* KEY_INDEX_H */
