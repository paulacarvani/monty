#include "monty.h"
/**
 * _pchar - prints the char at the top of the stack, followed by a new line.
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 */
void _pchar(stack_t **top, unsigned int line_number)
{
	int character;

	if (*top == NULL || top == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	character = (*top)->n;
	if (((character >= 'a') && (character <= 'z')) ||
	    ((character >= 'A') && (character <= 'Z')))
		printf("%c\n", character);
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free_stack(top);
		exit(EXIT_FAILURE);
	}
}