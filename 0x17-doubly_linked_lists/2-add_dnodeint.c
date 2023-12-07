#include "lists.h"

/*
 * *add_dnodeint - function that adds a new node at the beginning
 * of a dlistint_t list.
 *
 * @head: head
 * @n: node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_t * new_node = createNode(n);

	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node
	return (&new_node)
}
