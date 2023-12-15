#include "monty.h"
/**
 * f_mul - A function that multiplies the top
 * two elements of the stack.
 * @head: head of the stuck
 * @counter: the line number
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hot = *head;
	aux = hot->next->n * hot->n;
	hot->next->n = aux;
	*head = hot->next;
	free(hot);
}
