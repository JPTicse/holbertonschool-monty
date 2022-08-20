#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	printf("%d\n", (*stack)->n);
}
