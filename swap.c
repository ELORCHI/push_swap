#include "operations.h"

void swap(t_stack **stack, int id)
{
	t_stack *tmp;

	if (stack_len(*stack) < 2)
		return ;
	if (id == STACK_A)
		ft_putstr("sa");
	else
		ft_putstr("sb");

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->next = tmp;
}