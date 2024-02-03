#include "hash_tables.h"


/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nd;
	int cma = 1;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0 ; i < ht->size ; ++i)
	{
		nd = ht->array[i];
		while (nd != NULL)
		{
			if (!cma)
				printf(", ");
			cma = 0;
			printf("'%s': '%s'", nd->key, nd->value);
			nd = nd->next;
		}
	}
	putchar('}');
	putchar('\n');
}
