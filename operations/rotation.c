#include "operations.h"

void rotation(t_stack **a, t_stack **b, int id)
{
	if (id == STACK_A)
		rotate(a, STACK_A);
	else if (id == STACK_B)
		rotate(b, STACK_B);
	else if (id == STACK_A_B)
	{
		rotate(a, STACK_A_B);
		rotate(b, STACK_A_B);
		ft_putstr("rr");
	}
}