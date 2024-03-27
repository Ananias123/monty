#include "monty.h"

/**
 * f_div - function that divides two top elements of stack. 
 * @head: head of the stack
 * @counter: line_number
 * Return: nothing
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *head1;
	int leng = 0, aux;

	head1 = *head;
	while (head1)
	{
		head1 = head1->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head1 = *head;
	if (head1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = head1->next->n / head1->n;
	head1->next->n = aux;
	*head = head1->next;
	free(head1);
}
