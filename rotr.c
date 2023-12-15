#include "monty.h"
/**
  *f_rotr - A function that rotates the stack to the bottom
  *@head: the head of a stack
  *@counter: line number
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *coppy_head;

	coppy_head = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (coppy_head->next)
	{
		coppy_head = coppy_head->next;
	}
	coppy_head->next = *head;
	coppy_head->prev->next = NULL;
	coppy_head->prev = NULL;
	(*head)->prev = coppy_head;
	(*head) = coppy_head;
}
