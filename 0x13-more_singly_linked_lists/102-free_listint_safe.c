#include "lists.h"
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * avoiding issues with loops.
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t count = 0;
	uintptr_t hash_table[1024] = {0};

	while (current != NULL)
	{
		uintptr_t current_address = (uintptr_t)current;

		if (hash_table[current_address % 1024] == current_address)
		{
			return (count);
		}

	listint_t *next = current->next;

	free(current);
	count++;

	hash_table[current_address % 1024] = current_address;

	current = next;
	}

	*h = NULL;
	return (count);
}
