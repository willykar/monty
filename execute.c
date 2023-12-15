#include "monty.h"
/**
* execute - A function that executes the opcode
* @stack: The head of a linked list
* @counter: counter
* @file: poiner to the monty file
* @content: The line content
* Return: (1)
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int op = 0;
	char *op_c;

	op_c = strtok(content, " \n\t");
	if (op_c && op_c[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[op].opcode && op_c)
	{
		if (strcmp(op_c, opst[op].opcode) == 0)
		{	opst[op].f(stack, counter);
			return (0);
		}
		op++;
	}
	if (op_c && opst[op].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op_c);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
