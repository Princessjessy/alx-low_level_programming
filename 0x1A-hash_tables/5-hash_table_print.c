#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char *separator = "";

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			while (ht->array[i])
			{
				if (separator)
					printf("%s", separator);
				printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				separator = ", ";
			}
			i++;
		}
		printf("}\n");
	}
}
