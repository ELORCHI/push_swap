#include "stack.h"

t_stack *last_node(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	if (stack == NULL)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}