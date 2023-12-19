#include "sort.h"

/**
 * insertion_sort_list - simple implementation of the insertion_sort
 * @list: pointer to a linked list node
 * Return: a sorted linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *cur_pos, *last_pos;
	bool swap = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		cur_pos = current;
		while (cur_pos->prev != NULL)
		{
			swap = false;
			if (cur_pos->n < cur_pos->prev->n)
			{
				if (cur_pos->prev->prev != NULL)
					cur_pos->prev->prev->next = cur_pos;
				cur_pos->prev->next = cur_pos->next;
				last_pos = cur_pos->prev->prev;
				cur_pos->prev->prev = cur_pos;
				if (cur_pos->next != NULL)
					cur_pos->next->prev = cur_pos->prev;
				cur_pos->next = cur_pos->prev;
				cur_pos->prev = last_pos;
				swap = true;
				if (cur_pos->prev == NULL)
					*list = cur_pos;
				print_list(*list);
			}
			if (swap == false)
				cur_pos = cur_pos->prev;
		}
		current = current->next;
	}
}
