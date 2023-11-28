#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_cycle - function to check if the linked list has a cycle
 * @list: singly-linked list node
 * Return: 0 if no cycle, 1 if cycle found
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
	{
		return (0);/*No cycle if list is empty or has only one node*/
	}
	slow = list;
	fast = list->next;
	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			return (1);/*cycle detected*/
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);/*No cycle found*/
}
