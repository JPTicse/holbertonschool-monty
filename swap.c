#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
}
