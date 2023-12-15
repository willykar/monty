#include "monty.h"
/**
 * f_pstr - A function that prints the string
 * starting at the top of the stack,followed by a new
 * @head: the head of the stack
 * @counter: line number
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hom;
	(void)counter;

	hom = *head;
	while (hom)
	{
		if (hom->n > 127 || hom->n <= 0)
		{
			break;
		}
		printf("%c", hom->n);
		hom = hom->next;
	}
	printf("\n");
}
