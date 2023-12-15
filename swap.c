#include "monty.h"
/**
 * f_swap - A function that adds two elements of the stack
 * @head: the head of a stack
 * @counter: line number
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *hot;
	int len = 0, aux;

	hot = *head;
	while (hot)
	{
		hot = hot->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hot = *head;
	aux = hot->n;
	hot->n = hot->next->n;
	hot->next->n = aux;
}
