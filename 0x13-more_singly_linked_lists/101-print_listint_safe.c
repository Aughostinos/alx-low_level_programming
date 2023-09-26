#include "lists.h"
#include <stdint.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * avoiding infinite loops.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	uintptr_t hash_table[1024] = {0};

	while (current != NULL)
	{
		uintptr_t current_address = (uintptr_t)current;

		if (hash_table[current_address % 1024] == current_address)
	{
		printf("Linked list is a loop, exiting...\n");
		exit(98);
	}

	printf("%d\n", current->n);
	count++;

	hash_table[current_address % 1024] = current_address;

	current = current->next;
	}

	return (count);
}
