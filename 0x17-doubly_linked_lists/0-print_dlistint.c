#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head = NULL
		dlistint_t *node1 = malloc(sizeof(dlistint_t));
	dlistint_t *node2 = malloc(sizeof(dlistint_t));
	dlistint_t *node3 = malloc(sizeof(dlistint_t));

	if (!node1 || !node2 || !node3)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	node1->n = 1;
	node1->prev = NULL;
	node1->next = node2;

	node2->n = 2;
	node2->prev = node1;
	node2->next = node3;

	node3->n = 3;
	node3->prev = node2;
	node3->next = NULL;

	head = node1;
		size_t count = print_dlistint(head);

		printf("Number of nodes: %lu\n", count);

       /*Clean up: free allocated memory*/
		free(node1);
		free(node2);
		free(node3);
		return (0);
}
