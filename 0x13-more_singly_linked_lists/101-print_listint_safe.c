#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Returns: The number of nodes in the list.
 * If the function fails, exits the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;

		if (current == head)
		{
			fprintf(stderr, "Error: Circular linked list detected\n");
			exit(98);
		}
	}

	return (count);
}
