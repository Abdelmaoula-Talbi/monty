#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: pointer to pointer to the head of the stack.
 * Return: the address of the second top element.
 */
stack_t *add(stack_t **stack, unsigned int line_number)
{
	int size, sum;
	stack_t *temp;

	size = 0;
	while (*stack != NULL)
	{
		size++;
		stack = stack->next;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack);
	sum += temp->n;
	temp = temp->next;
	sum += temp->n;
	temp->n = sum;
	temp->prev = NULL;
	(*head) = temp;
	return (temp);
}

