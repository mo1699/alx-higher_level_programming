#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Author - Tolulope Fakunle
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (*head == NULL || *head.n >= number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (*head && *head.next && *head.next->n < number)
		*head = *head->next;

	new->next = *head.next;
	*head.next = new;

	return (new);
}
