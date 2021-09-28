#include "srcs.h"

int is_sorted(t_stack *stack)
{
		t_stack *tmp;

		tmp = stack;
		if (tmp->next == NULL)
				return (0);
		while (tmp->next)
		{
				if (tmp->data > tmp->next->data)
					   return (-1);
				tmp = tmp->next;	
		}
		return (0);
}
