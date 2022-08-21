#include "monty.h"

/**
 * _swap - swap the top two elements os the stack
 * @stack: pointer to lists
 * @line_number: number of the line
 */

void _swap(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp;
	int temp;

	tmp = *stack;
	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = temp;
} 
