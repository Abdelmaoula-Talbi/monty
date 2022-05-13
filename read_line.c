#include "main.h"

/**
 * read_line - read the line passed by user as instruction.
 * Return: the line passed by the user.
 */
char *read_line(void);
{
	char *line;
	int size = 50;
	int bytes_read;

	line = malloc(sizeof(size));
	bytes_read = getline(&line, &size, stdout);
	if (bytes_read == -1)
	{
		if (feof(stdout))
			exit(EXIT_SUCCESS);
		else
			exit(EXIT_FAILURE);
	}
	return (line);
}
