#include "operations.h"

void rotate(t_stack **stack, int id)
{
	t_stack *head;

	head = copy_node(*stack);
	pop(stack);
	push_back(stack, head);
	if (id == STACK_A)
		ft_putstr("ra\n");
	else if (id == STACK_B)
		ft_putstr("rb\n");
}

// int main()
// {
// 	t_stack *stack;

// 	stack = new_node(2);
// 	push(&stack, new_node(1));
// 	push(&stack , new_node(0));
// 	display_stack(stack, STACK_A);
// 	rrotate(&stack, STACK_A);
// 	display_stack(stack, STACK_A);
// }