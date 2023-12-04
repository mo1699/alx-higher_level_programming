#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *fast;

	if (!list)
	{
		return (0);
	}
	fast = list->next;
	while (fast && list && fast->next)
	{
		if (list == fast)
		{
			return (1);
		}
		list = list->next;
		fast = fast->next->next;
	}
	return (0);
}
