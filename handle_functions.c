#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	int num;
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (!new)
		exit(EXIT_FAILURE);

	num = atoi(buff);

	printf("atoi: %i\n", num);
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

void pop(stack_t **stack, unsigned int line_number)
{
	printf("d");
}

/**
 * swap - swaps the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	printf("d");
}

/**
 * add - adds the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	printf("d");
}
