#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the hash table
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Insert a key-value pair into the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to insert
 * @value: The value associated with the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	insert_sorted(ht, new_node);
	return (1);
}

/**
 * shash_table_get - Retrieve a value associated with a key
 * @ht: The sorted hash table
 * @key: The key to search for
 * Return: The value associated with the key or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table in
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash tabl
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table and its elements
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		tmp = current;
		current = current->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

	free(ht->array);
	free(ht);
}

/**
 * insert_sorted - Insert a new node into the sorted hash
 * @ht: The sorted hash table
 * @new_node: The node to insert
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current, *prev;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	current = ht->shead;
	prev = NULL;

	while (current != NULL && strcmp(current->key, new_node->key) < 0)
	{
		prev = current;
		current = current->snext;
	}

	if (current == NULL)
	{
		prev->snext = new_node;
		new_node->sprev = prev;
		ht->stail = new_node;
	}
	else
	{
		new_node->sprev = prev;
		new_node->snext = current;
		if (prev != NULL)
			prev->snext = new_node;
		else
			ht->shead = new_node;
		current->sprev = new_node;
	}
}
