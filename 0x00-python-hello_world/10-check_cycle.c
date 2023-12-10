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
	listint_t *me;
/*If the list is empty, there can't be a cycle, so
 * it returns 0 (indicating no cycle)*/
	if (!list)
		return (0);


	me = list->next;
	while (me && me->next)
	{
		if (me == list)
			return (1);
		list = list->next;
		me = me->next->next;
	}
	return (0);
}
