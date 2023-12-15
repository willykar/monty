#include "monty.h"
/**
 * f_pop - A function that prints the top of a stack
 * @head: The head of a stack
 * @counter: line
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *hot;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hot = *head;
	*head = hot->next;
	free(hot);
}
