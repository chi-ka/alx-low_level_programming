#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: A pointer to the head of the linked list.
 * Return: The sum of the data in the linked list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
