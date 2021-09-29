#include "srcs.h"

void sort_three(t_stack **a, t_stack **b)
{
	write(2, "hello from sort three\n", ft_strlen("hello from sort three\n"));
	push_a_b(a, b, STACK_A);
	if ((*a)->data > (*a)->next->data)
		rotate(a, STACK_A);
	push_a_b(a, b, STACK_B);
	if ((*a)->data > (*a)->next->data)
	{
		if ((*a)->data > (*a)->next->next->data)
			rotate(a, STACK_A);
		else
			swap(a, STACK_A);
	}
}
