#include "monty.h"
/**
 * pall_function - prints values on the stack
 * @head: stack head
 * @counter: unused
 * Return: no return
*/
void pall_function(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
