#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Returns: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next_node;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (current == *h)
		break;
	}

	*h = NULL;

	return (size);
}
