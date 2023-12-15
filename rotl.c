#include "monty.h"
/**
  *f_rotl- A function that rotates the stack
  *@head: the head of a stack
  *@counter: line number
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tech_mo_p = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tech_mo_p->next != NULL)
	{
		tech_mo_p = tech_mo_p->next;
	}
	tech_mo_p->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tech_m_p;
	(*head) = aux;
}
