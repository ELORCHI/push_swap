/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:18:36 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/22 12:52:38 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void push_a_b(t_stack **a, t_stack **b, int id)
{
	t_stack **from;
	t_stack **to;
	t_stack *tmp;
	char 	*str;

	if (id == STACK_A)
	{
		from = a;
		to = b;
		str = strdup("pb");
	}
	else
	{
		from = b;
		to = a;
		str = strdup("pa");
	}
	if (*from == NULL)
		return ;
	tmp = copy_node(*from);
	pop(from);
	push(to, tmp);
	ft_putstr(str);
	free(str);
}
