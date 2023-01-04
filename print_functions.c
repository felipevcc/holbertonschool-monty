#include "monty.h"

/**
 * pall - prints all nodes
 * @stack: nodes
 * @line_number: file line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
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
	printf("d");
}

/**
 * nop -  doesn’t do anything.
 * @stack: nodes
 * @line_number: file line number
 */

void nop(stack_t **stack, unsigned int line_number)
{
	printf("d");
}