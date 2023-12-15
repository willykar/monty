#include "monty.h"
/**
 * f_pchar - A function that prints the char at the
 * top of the stack,followed by a new line
 * @head: The head of a stack
 * @counter: number
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *hobe;

	hobe = *head;
	if (!hobe)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hobe->n > 127 || hobe->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hobe->n);
}
