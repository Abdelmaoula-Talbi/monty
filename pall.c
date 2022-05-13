#include "monty.h"
/**
 * pall - print all data in stack
 * @stack: stack
 * @line_number: line number in monty .m file
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
				tmp = tmp->next;


	}
}
