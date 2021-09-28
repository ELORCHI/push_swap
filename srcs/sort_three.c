#include "srcs.h"

void sort_three(t_stack **a, t_stack **b)
{
		t_stack *b;
		int		i;

		push_a_b(a, b, STACK_A);
		if ((*a)->data > (*a)->next->data)
				rotate(&a, STACK_A);
		push_a_b(a, b, STACK_B);
		if ((*a)->data > (*a)->next->data)
		{
				if ((*a)->data > (*a)->next->next->data)
					rotate(a, STACK_A);
				else
						swap(a, STACK_A);
		}
}
