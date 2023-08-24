#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/*
 * print_list - prints a linked list.
 * @h: Your Name
 * Description: A simple linked lists and printing elements.
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->str, h->len);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		count++;
	}

	return (count);
}

