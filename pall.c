#include "monty.h"
/**
 * f_pall - A function that prints the stack
 * @head: The head of the stack
 * @counter: counter
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hm;
	(void)counter;

	hm = *head;
	if (hm == NULL)
		return;
	while (hm)
	{
		printf("%d\n", hm->n);
		hm = hm->next;
	}
}
