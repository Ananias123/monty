#include "monty.h"
/**
 * f_pstr - A fcn that prints the string starting at the top of the stack
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
