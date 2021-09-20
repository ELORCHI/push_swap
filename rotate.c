#include "operations.h"

void rotate(t_stack **stack, int id)
{
	t_stack *last;
	t_stack *head;

	head = copy_node(*stack);
	last = last_node(*stack);
	pop_back(stack);
	add_back(stack, head);
	pop(stack);
	push(stack, last);
	if (id = STACK_A)
		ft_putstr("ra\n");
	else if (id = STACK_B)
		ft_putstr("rb\n")
}