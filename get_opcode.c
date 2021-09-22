#include "monty.h"
/**
 * get_opcode - contain the function that will perform the operation
 * @token: operation code
 * @line: line readed
 * @stack: structure
 * Return: 0 on success and 1 if fails
 */
int get_opcode(char *token, unsigned int line, stack_t **stack)
{
	instruction_t operation[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{NULL, NULL}
	};
	int i;

	for (i = 0; operation[i].opcode; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			operation[i].f(stack, line);
			return (0);
		}
	}
	return (1);
}