#include "monty.h"

/**
 * main - function main
 * @argc: variable int
 * @argv: variable char
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	handle(argv[1]);
	return (0);
}
