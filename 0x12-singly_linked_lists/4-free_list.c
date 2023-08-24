#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list.
 *
 * @head: pointer to linked list_t
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp;

		temp = head;
		head = head->next;
		free(temp);
	}
}
