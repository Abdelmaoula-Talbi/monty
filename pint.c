#include "monty.h"
/**
 *pint - prints the top value of the stack
 *@stack: pointer to the top of the stack
 *@line_number: the line number of the command interpted
 *
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
    }
    else 
	printf("%d\n", (*stack)->n);
}