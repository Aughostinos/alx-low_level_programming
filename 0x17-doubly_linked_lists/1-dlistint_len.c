#include "lists.h"
/**
 * dlistint_len - a function that returns the number 
 * of elements in a linked dlistint_t list.
 *
 * @h: input
 *
 * Return: counter
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
