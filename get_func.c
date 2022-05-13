#include "main.h"

/**
 * get_op_func - select the right function to perform
 * the instruction asked by user.
 * @opcode: the opcode passed by user.
 * Return: pointer to the function that corresponds to the instruction
 * given by user.
 */
void (*get_op_func(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t insts[] = {
		{"push", push_elem},
		{"pall", print_all},
		{"pint", print_top},
		{"pop", remove_top},
		{"swap", swap_top},
		{"add", add_top},
		{"nop", do_nothing},
		{NULL, NULL}
	};
	int i;

	while (i < 7)
	{
		if (strcmp(opcode, insts[i].opcode) == 0)
			return (insts[i].f);
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
