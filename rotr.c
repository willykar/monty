#include "monty.h"
/**
  *f_rotr - A function that rotates the stack to the bottom
  *@head: the head of a stack
  *@counter: line number
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *last = *head;

    if (*head == NULL || (*head)->next == NULL)
        return;

    while (last->next != NULL)
        last = last->next;

    last->next = *head;
    last->prev->next = NULL;

    (*head)->prev = last;
    *head = last;
}
