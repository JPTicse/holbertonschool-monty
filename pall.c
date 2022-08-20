#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: the stack
 * @line_number: instuction line number
 * Return: nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	UNUSED(line_number);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	temp = NULL;
}
