#include "monty.h"
/**
 * pop_stack - Function that pop (delete) the value at top of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void _pop(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;

	if (top == NULL || *top == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = tmp->next;
	free(*top);
	*top = tmp;
}