#include "hash_tables.h"
/**
  * hash_table_print - prints hash table content
  * @ht: hashtable
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	int x;
	hash_node_t *node;
	char *com = "";

	if (ht == NULL || !ht->array)
	{
		return;
	}
	else
	{
		printf("{");
		for (x = 0; x < (int) ht->size; x++)
		{
			if (ht->array[x] != NULL)
			{
				node = ht->array[x];
				while (node)
				{
					printf("%s'%s': '%s'", com, node->key, node->value);
					com = ", ";
					node = node->next;
				}
			}
		}
		printf("}");
		printf("\n");
	}
}
