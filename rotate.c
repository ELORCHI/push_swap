#include "operations.h"

void rotate(t_stack **stack, int id)
{
	t_stack *last;
	t_stack *head;

	head = copy_node(*stack);
	pop(stack);
	push_back(stack, last);
	if (id = STACK_A)
		ft_putstr("ra\n");
	else if (id = STACK_B)
		ft_putstr("rb\n");
}