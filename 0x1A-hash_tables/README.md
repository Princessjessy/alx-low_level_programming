0x1A. C - Hash tables
An introductory project on:

What is a hash function
What makes a good hash function
What is a hash table, how do they work and how to use them
What is a collision and what are the main ways of dealing with collisions in the context of a hash table
What are the advantages and drawbacks of using hash tables
What are the most common use cases of hash tables
Requirements
Files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Allowed to use the C standard library
File Descriptions
Mandatory
0-hash_table_create.c - creates a hash table

1-djb2.c - a hash function implementing the djb2 algorithm

2-key_index.c - a function that gives you the index of a key

3-hash_table_set.c - a function that adds an element to the hash table

4-hash_table_get.c - a function that retrieves a value associated with a key

5-hash_table_print.c - a function that prints a hash table

Print the key/value in the order that they appear in the array of hash table
Order: array, list
6-hash_table_delete.c - a function that deletes a hash table

Advanced
100-sorted_hash_table.c - Rewrite the previous functions using these data structures:

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
The key/value pair should be inserted in the sorted list at the right place
Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it.
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
Should print the hash table using the sorted linked list
void shash_table_print_rev(const shash_table_t *ht);
Should print the hash tables key/value pairs in reverse order using the sorted linked list
void shash_table_delete(shash_table_t *ht);
alx-low_level_programming/0x1A-hash_tables at main · Gbeminiyi-S/alx-low_level_programming · GitHub
