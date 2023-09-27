#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head, *loop_node = NULL;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_node = head;

			while (loop_node != slow)
			{
				loop_node = loop_node->next;
				slow = slow->next;
			}
            
		return loop_node;
		}
	}

	return (NULL);
}
