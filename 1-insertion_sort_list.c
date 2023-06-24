#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * using insertion sort algorithm
 * @list: The pointer of pointer to the head of the list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			(temp->prev)->next = temp->next;
			if (temp->next != NULL)/*if not last node*/
				(temp->next)->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = (temp->prev)->prev;
			(temp->next)->prev = current;
			if (temp->prev == NULL)/*if it becomes first*/
				*list = current;
			else
				(temp->prev)->next = current;
			print_list(*list);
		}
		current = current->next;
	}
}
