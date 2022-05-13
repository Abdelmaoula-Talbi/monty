#include "monty.h"

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: vector of arguments.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	execute_file(argv[1]);
	return (0);
}
