/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:16:47 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:13:11 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*m;
	int		position;

	m = min(*a);
	position = node_position(*a, m);
	if (position <= 2)
	{
		while (position--)
			rotate(a, STACK_A);
	}
	else
	{
		while (position < 5)
		{
			rrotate(a, STACK_A);
			position++;
		}
	}
	push_a_b(a, b, STACK_A);
	sort_four(a, b);
	push_a_b(a, b, STACK_B);
}
