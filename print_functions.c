#include "monty.h"

/**
 * pall - prints all nodes
 * @stack: nodes
 */

void pall(stack_t **stack)
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
 */

void pint(stack_t **stack)
{
	printf("%i\n", (*stack)->n);
}

/**
 * nop -  doesn’t do anything.
 * @stack: nodes
 */

void nop(stack_t **stack)
{
	(void)stack;
	printf(" ");
}
