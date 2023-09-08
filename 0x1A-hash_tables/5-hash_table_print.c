#ifndef HT_PRINT_H
#define HT_PRINT_H

#include "hash_tables.h"

/**
 * hash_table_print - prints the key:value from ht
 * @ht: hash table pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *_node;
	int _flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		_node = ht->array[i];
		while (_node)
		{
			if (_flag)
				printf(", ");
			printf("'%s': '%s'", _node->key, _node->value);
			_flag = 1;
			_node = _node->next;
		}
	}
	printf("}\n");
}

#endif /* HT_PRINT_H */
