#include "monty.h"
/**
 * f_push - A function that adds element to the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: void
*/
void f_push(stack_t **head, unsigned int counter)
{
	int a, b = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			b++;
		for (; bus.arg[b] != '\0'; b++)
		{
			if (bus.arg[b] > 57 || bus.arg[b] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, a);
	else
		addqueue(head, a);
}
