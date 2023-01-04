#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
 * @line_number: file line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	char **split_buff;
	int num;
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		free(new);
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	split_buff = _split(buff, " ");

	num = _atoi(split_buff[1], line_number);

	new->n = num;
	new->prev = NULL;
	new->next = *stack;

	if (*stack)
		(*stack)->prev = new;
	*stack = new;
	free(split_buff);
}

/**
 * pop - removes the top node of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *delete = *stack;

	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next)
	{
		*stack = delete->next;
		(*stack)->prev = NULL;
		free(delete);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}

/**
 * swap - swaps the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *aux = *stack;

	if (!*stack || !stack || !head->next)
	{
		dprintf(STDERR_FILENO, "L%i: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	head = head->next;
	head->prev = NULL;

	aux->next = head->next;
	head->next = aux;
	(head->next)->prev = head;

	*stack = head;
}

/**
 * add - adds the top two nodes of the stack
 * @stack: nodes
 * @line_number: file line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (!*stack || !stack || !head->next)
	{
		dprintf(STDERR_FILENO, "L%i: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	/* result in node 2 */
	(head->next)->n += head->n;

	/* remove node 1 */
	pop(&head, line_number);

	/* update stack */
	*stack = head;
}
