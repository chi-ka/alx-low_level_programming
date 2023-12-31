#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - defines a list
 * @str: a stiring
 * @len: the length of te string
 * @next: pointer position
 */

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);
void pre_main(void) __attribute__((constructor));

#endif /* LISTS_H */

