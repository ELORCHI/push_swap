#include "stack.h"

t_stack *copy_node(t_stack *srcs)
{
	t_stack *copy;

	copy = (t_stack *)malloc(sizeof(t_stack));
	if (copy)
	{
		copy->next = NULL;
		copy->data = srcs->data;
	}
	return (copy);
}