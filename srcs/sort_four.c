/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:15:27 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 15:51:30 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_four(t_stack **a, t_stack **b)
{
	t_stack *m;
	int		position;
	int		i;

	i = 0;
	m = min(*a);
	position = node_position(*a, m);
	if (position == 0)
		push_a_b(a, b, STACK_A);
	else if (position == 1)
	{
		swap(a, STACK_A);
		push_a_b(a, b, STACK_A);
	}
	else if (position == 2)
	{
		rev_rotation(a, b, STACK_A);
		rev_rotation(a, b, STACK_A);
		push_a_b(a, b, STACK_A);
	}
	else if (position == 3)
	{
		rev_rotation(a, b, STACK_A);
		push_a_b(a, b, STACK_A);
	}
	sort_three(a);
	push_a_b(a, b, STACK_B);
}
