#include "monty.h"

/**
 * _div - divides the second top element of the stack
 * @stack: the stack
 * @line_number: instructions line number
 * Return: nothing
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n /= (*stack)->n;
	free(*stack);
	*stack = temp;
}
