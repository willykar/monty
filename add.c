#include "monty.h"
/**
 * f_add - A function that adds the top two elements of the stack
 * @head: The stack head
 * @counter: the line number
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *home;
	int length = 0, auxiliary;

	home = *head;
	while (home)
	{
		home = home->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	home = *head;
	auxiliary = home->n + home->next->n;
	home->next->n = auxiliary;
	*head = home->next;
	free(home);
}
