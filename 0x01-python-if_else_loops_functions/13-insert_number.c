#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * (sorted by the number) >>>> (node->number) > (new-> number)
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Author - Tolulope Fakunle
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
/*
 * check if the list (head) == NULL or 
 * the number which i want put it <= the cuurent num
 */
	if (node == NULL || node->n >= number)
	{
/*
 * if it happen we will put the new node in the first node
 */
		new->next = node;
		*head = new;/*updating the head*/
		return (new);
	}
/*
 * check if the next node is null or not
 * to knowe if we at the last node or not
 */	
/*until the last node*/
	while (node->next && node->next->n < number)
		node = node->next;
/*set the new node between the last node and the next of it*/
	new->next = node->next;
	node->next = new;
	return (new);
}
