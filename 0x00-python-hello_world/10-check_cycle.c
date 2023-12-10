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
/* loop  continues as long as me (and me->next) is not NULL
 * this This prevents accessing a NULL pointer which is the last pointer*/
	while (me && me->next)
	{
/*checks whether the two pointers, list and me, have met
 * if it happen that mean there is cycle
 * and return 1*/
		if (me == list)
			return (1);
/*if not me move to nest node */
		list = list->next;
		me = me->next->next;
	}
/* when accessing to last node (NULL) that mean no cycle and return 0*/
	return (0);
}
