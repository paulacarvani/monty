#include "monty.h"
/**
 * push_stack - Function that pushes an element to the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void _push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node;

	if (top == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->next = *top;
	new_node->prev = NULL;
	new_node->n = take_num;
	if (*top)
		(*top)->prev = new_node;
	*top = new_node;
}
/**
 * pall_stack - Prints all values of stack, starting from top of stack.
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void _pall(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;
	(void) line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}