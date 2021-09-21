#include "stack.h"

void pop_back(t_stack **stack)
{
	t_stack *tmp;
	t_stack	*to_free;

	if (stack == NULL || *stack == NULL)
		return ;
	if ((*stack)->next == NULL)
	{
		*stack = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	to_free = tmp->next;
	tmp->next = NULL;
	free(to_free);	
}