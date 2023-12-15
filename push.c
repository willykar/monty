#include "monty.h"
/**
 * f_push - A function that adds a node to the top of a stack
 * @head: The head of a stack
 * @counter: line
*/
void f_push(stack_t **head, unsigned int counter)
{
	int nove, jal = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jal++;
		for (; bus.arg[jal] != '\0'; jal++)
		{
			if (bus.arg[jal] > 57 || bus.arg[jal] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	nove = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, nove);
	else
		addqueue(head, nove);
}
