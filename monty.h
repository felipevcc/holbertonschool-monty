#ifndef MONTY_H
#define MONTY_H

/* LIBRARIES */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* GLOBAL VARS */

char *buff;

/* STRUCTURES */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack);
} instruction_t;

/* PROTOTYPES */

/* main functions */
void handle(char *file);
void (*check_opcodes(void))(stack_t **);

/* aux functions*/
void *_calloc(unsigned int nmemb, unsigned int size);
char **_split(char *str, char *sep);
int _atoi(char *str);

/* handle functions */
void push(stack_t **stack);
void pop(stack_t **stack);
void swap(stack_t **stack);
void add(stack_t **stack);

/* print functions */
void pall(stack_t **stack);
void pint(stack_t **stack);
void nop(stack_t **stack);

#endif