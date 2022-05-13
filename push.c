#include "monty.h"

/**
 * push - push an element to the stack.
 * @stack: pointer to the pointer to the first node in the stack.
 * @line_number: number of the line stored into the new pushed element.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "L%d: usage: push intger\d", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = (*stack);
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;
	(*stack) = new;
}
