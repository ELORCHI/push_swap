#include "stack.h"

t_stack *last_node(t_stack *stack)
{
	t_stack *tmp;

	if (stack == NULL)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
