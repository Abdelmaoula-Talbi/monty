#include "monty.h"

/**
 * execute_file - open a file given by user, read it and execute it..
 * @filename: name of the file.
 * Return: Nothing.
 */
void execute_file(char *filename)
{
	int fd_o, line_number;
	char *line;
	char **tokens;
	stack_t **stack;

	if (filename == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
	{
		fprintf(stderr, "Error: Cant't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	line_number = 0;
	while (!eof)
	{
		line = read_line();
		tokens = split_line(line);
		get_opc_func(token[0])(stack, line_number);
		free(line);
		free(tokens);
		line_number++;
	}
}
