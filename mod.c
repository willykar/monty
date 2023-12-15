#include "monty.h"
/**
 * f_mod - A function that computes the rest of
 * the division of the second
 * top element of the stack by the top element of the stack
 * @head: The stack head
 * @counter: line number
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *hm;
	int len = 0, aux;

	hm = *head;
	while (hm)
	{
		hm = hm->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hm = *head;
	if (hm->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hm->next->n % hm->n;
	hm->next->n = aux;
	*head = hm->next;
	free(head);
}
