#include "monty.h"
/**
  *f_sub - A function that does subtration
  *@head: the head of a stack
  *@counter: line
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus_i, nodes_st;

	aux = *head;
	for (nodes_st = 0; aux != NULL; nodes_st++)
		aux = aux->next;
	if (nodes_st < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus_i = aux->next->n - aux->n;
	aux->next->n = sus_i;
	*head = aux->next;
	free(aux);
}
