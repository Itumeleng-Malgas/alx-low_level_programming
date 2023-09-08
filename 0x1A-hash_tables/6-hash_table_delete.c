#ifndef HT_DELETE_H
#define HT_DELETE_H

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

#endif /* HT_DELETE_H */
