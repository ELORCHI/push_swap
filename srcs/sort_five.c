#include "srcs.h"

void sort_five(t_stack **a, t_stack **b)
{
    t_stack *tmp;
	int 	position;


	write(2, "hello from sort four\n", ft_strlen("hello from sort four\n"));
	push_a_b(a, b, STACK_A);
	sort_four(a, b);
	tmp = (*a)->next;
	while (tmp && tmp->index < (*a)->index)
	{
		tmp = tmp->next;
		position++;
	}
	if (position == 1)
		swap(a, STACK_A);
	else if (position == 4)
		rotate(a, STACK_A);
	else if (position == 3)
	{
		rev_rotation(a, b, STACK_A);
		swap(a, STACK_A);
		rotate(a, STACK_A);
		rotate(a, STACK_A);
	}
	else if (position == 2)
	{
		push_a_b(a, b, STACK_A);
		rotate(a, STACK_A);
		rotate(a, STACK_A);
		push_a_b(a, b, STACK_B);
		rev_rotation(a, b, STACK_A);
		rev_rotation(a, b, STACK_A);
	}
}
// i;
// j;
// k;
// l;
// m;