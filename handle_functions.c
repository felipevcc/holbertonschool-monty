#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack)
{
	char **split_buff;
	int num;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		exit(EXIT_FAILURE);

	split_buff = _split(buff, " ");

	num = _atoi(split_buff[1]);

	new->n = num;
	new->prev = NULL;
	new->next = *stack;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}

/**
 * pop - removes the top node of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void pop(stack_t **stack)
{
	printf("d");
}

/**
 * swap - swaps the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void swap(stack_t **stack)
{
	printf("d");
}

/**
 * add - adds the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void add(stack_t **stack)
{
	printf("d");
}
