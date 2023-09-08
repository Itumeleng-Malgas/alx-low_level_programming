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
	hash_node_t  *node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

#endif /* HT_PRINT_H */
