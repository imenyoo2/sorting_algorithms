
#include "sort.h"

void swap_nodes(listint_t *a, listint_t *b, listint_t **head)
{
	listint_t *buffer = b->next;
	if (a->prev)
		a->prev->next = b;
	else
		*head = b;
	if (b->next)
		b->next->prev = a;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;
	a->next = buffer;
}

void insertion_sort_list(listint_t **list)
{
	listint_t *holder = (*list)->next;
	listint_t *buffer;

	while (holder)
	{
		buffer = holder;
		holder = holder->next;
		while (buffer->prev && buffer->n < buffer->prev->n)
		{
			swap_nodes(buffer->prev, buffer, list);
			print_list(*list);
		}
	}
}
