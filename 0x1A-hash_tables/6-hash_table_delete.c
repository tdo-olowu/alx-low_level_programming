#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: none.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cr_node, *pre_node;

	if (ht == NULL)
		return;

	for (i = 0 ; i < ht->size ; ++i)
	{
		cr_node = ht->array[i];
		while (cr_node != NULL)
		{
			free(cr_node->key);
			free(cr_node->value);
			pre_node = cr_node;
			cr_node = cr_node->next;
			free(pre_node);
		}
	}
	free(ht->array);
	free(ht);
}
