#ifndef HT_GET_H
#define HT_GET_H

#include "hash_tables.h"
/**
 * hash_table_get - Retrieve value associeted with key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: value of element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

#endif /* HT_GET_H */
