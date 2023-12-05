#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_palindrome - a function to check for palindromity
 * @head: head of the linked list
 * Return: 1 if palindrome found 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev = NULL;
	listint_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (1);
	}

	/*Finding the middle of the list and reversing the first half*/
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		temp = slow->next;

		slow->next = prev;
		prev = slow;
		slow = temp;
	}

	/*Adjusting for odd length*/
	if (fast != NULL)
	{
		slow = slow->next;
	}

	/*Comparing both halves for palindrome*/
	while (prev != NULL && slow != NULL)
	{
		if (prev->n != slow->n)
		{
			return (0);
		}
		prev = prev->next;
		slow = slow->next;
	}
	return (1);
}
