#include "monty.h"
/**
 * _div - Divides the seccond top element of the stack by the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */

void _div(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*top)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*top)->next;
	tmp->n = (tmp->n) / (*top)->n;
	_pop(top, line_number);
}