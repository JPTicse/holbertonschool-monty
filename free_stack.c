#include "monty.h"
/**
 * free_stack - frees a stack
 * @stack: stack to be freed
 * Return: nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	if (stack)
	{
		while ((temp = stack))
		{
			stack = stack->next;
			free(temp);
		}
	}
}
