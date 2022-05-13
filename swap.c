#include "monty.h"

/**
 * swap - swaps the two top elements of the stack.
 * @stack: pointer to the top element of the stack.
 * @line_number: line number of the instruction.
 * Return: pointer to the new top element of the stack.
 */
stack_t *swap(stack_t *stack, unsigned int line_number)
{
	int i;
	stack_t *temp;
	stack_t *elem1 = stack;
	stack_t *elem2 = elem1->next;
	stack_t *elem3;

	i = 0;
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	elem3 = elem2->next;
	temp = elem1->prev;
	elem1->next = elem3;
	elem1->prev = elem2;
	elem2->prev = temp;
	elem2->next = elem1;
	elem3->prev = elem1;
	head = elem2;
	return (elem2);
}




	temp->next = temp->next->next;
	temp = temp->next;

