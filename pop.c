#include "monty.h"

/**
 * pop - deletes the top element of the stack.
 * @stack: pointer to the pointer to the top element of the stack.
 * Return: pointer to the new top element of the stack.
 */
stack_t *pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if ((*stack) == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	temp = temp->next;
	temp->prev = NULL;
	*stack = temp;
	return (temp);
}
