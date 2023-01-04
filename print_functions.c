#include "monty.h"

/**
 * pall - prints all nodes
 * @stack: nodes
 * @line_number: file line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack)
	{
		printf("%i\n", (*stack)->n);
		stack = &(*stack)->next;
	}
}

/**
 * pint - prints a node
 * @stack: nodes
 * @line_number: file line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		dprintf(STDERR_FILENO, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}

/**
 * nop -  doesn’t do anything.
 * @stack: nodes
 * @line_number: file line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
