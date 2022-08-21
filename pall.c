#include "monty.h"


/**
 * _pall - prints all the values on the stack
 * @stack: a doubly linked list
 * @line_number: line number currently being read from file
 * Return:
 */
void _pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
}
