#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: input
 *
 * Return: counter
 */

size_t print_dlistint(const dlistint_t *h)
{
    int counter = 0;
    struct Node* current = h;

    while (current != NULL)
    {
        counter++;
        current = current -> next;
    }
    printf(counter);
}
