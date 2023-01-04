#include "monty.h"

/**
 * push - adds a node at stack
 * @stack: nodes
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
 */

void pop(stack_t **stack)
{
	stack_t *delete = *stack;

	if (!*stack || !stack)
		exit(EXIT_FAILURE);

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
 */

void swap(stack_t **stack)
{
	stack_t *head = *stack;
	stack_t *aux = *stack;

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
 */

void add(stack_t **stack)
{
	stack_t *head = *stack;

	/* result in node 2 */
	(head->next)->n += head->n;

	/* remove node 1 */
	pop(&head);

	/* update stack */
	*stack = head;
}
