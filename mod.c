#include "monty.h"
/**
 * mod - computes the rest of div
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't mod, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	if ((*stack)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%d: division by zero\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n %= (*stack)->n;
	free(*stack);
	*stack = temp;
}
