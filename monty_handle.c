#include "monty.h"

/**
 * handle - program handle function :D
 * @file: variable char
 */

void handle(char *file)
{
	FILE *fd;
	char *buff = NULL;
	size_t read_size = 0;
	ssize_t get_size = 0;

	fd = fopen(file, "r+");
	if (!fd)
	{
		dprintf(STDERR_FILENO, "Error: Can`t open file\n");
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &read_size, fd) != -1)
	{
		printf("%s\n", buff);
	}
	free(buff);
	fclose(fd);
}
