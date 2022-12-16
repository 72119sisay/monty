#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - prints pop error message for empty stacks.
 * @line_number: Line number in script where error occured.
 * 
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * print_error - prints pint error message for empty stacks.
 * @line_number: Line number in monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int print_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't print, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - prints monty math function error messages
 *			for stacks/queues smaller than two nodes.
 * @line_number: Line number in monty bytecodes file where error occured.
 * @op: Operation where the error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op)
	return (EXIT_FAILURE);
}

/**
 * div_error - prints division error messages for division by 0.
 * @line_number: Line number in monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - prints pchar error messages for empty stacks
 * 		empty stacks and non-character values.
 * @line_number: Line number in monty bytecodes file where error occured.
 * @message: The corresponding error message to print.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	Return (EXIT_FAILURE);
}
