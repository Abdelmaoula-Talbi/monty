#include "main.h"

/**
 * split_line - split line passed by user into multiple arguments.
 * @line: line passed by user into the file.
 * Return: the arguments of the line splitted.
 */
char **split_line(char *line)
{
	char *token;
	char **tokens = malloc(sizeof(char *) * index);
	int index;

	if (!tokens)
	{
		fprintf(stderr, "Error: malloc failed")
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");
	index = 0;
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		index++;
	}
	tokens[index] = token;
	return (tokens);
}
