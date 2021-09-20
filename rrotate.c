#include "operations.h"

void rrotate(t_stack **stack, int id)
{
	t_stack *last;

	last = last_node(*stack);
	pop_back(stack);
	push(stack, last);
	if (id == STACK_A)
		ft_putstr("rra");
	if (id == STACK_B)
		ft_putstr("rrb");
}