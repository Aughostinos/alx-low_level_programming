#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * avoiding infinite loops.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;
	int loop_detected = 0;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		printf("Linked list is a loop, exiting...\n");
		exit(98);
	}

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return count;
}
