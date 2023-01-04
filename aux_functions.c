#include "monty.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}

/**
 * _atoi - function converts a string to integer
 * @str: string to convert
 * @line_number: file line number
 * Return: int
 */

int _atoi(char *str, unsigned int line_number)
{
	int num = 0, i = 0;
	unsigned int valid_nums = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		valid_nums++;
		i++;
	}

	if (valid_nums != strlen(str) - 1)
	{
		dprintf(STDERR_FILENO, "L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	return (num);
}

/**
 * _split - split string
 * @str: string
 * @sep: separator
 * Return: divided str
 */

char **_split(char *str, char *sep)
{
	char *aux, **split_str;
	int i = 0;

	aux = strtok(str, sep);
	split_str = (char **)_calloc(100, sizeof(char *));

	if (!split_str)
	{
		free(split_str);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (aux)
	{
		split_str[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_str);
}

/**
 * free_stack - frees a list
 * @head: struct
 */

void free_stack(stack_t *head)
{
	stack_t *stack;

	while (head)
	{
		stack = head->next;
		free(head);
		head = stack;
	}
}
