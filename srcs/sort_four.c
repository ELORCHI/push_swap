/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:15:27 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 16:13:21 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_four(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		position;

	push_a_b(a, b, STACK_A);
	sort_three(a);
	push_a_b(a, b, STACK_B);
	tmp = (*a)->next;
	position = 0;
	while (tmp && tmp->index < (*a)->index)
	{
		tmp = tmp->next;
		position++;
	}
	if (position == 1)
		swap(a, STACK_A);
	else if (position == 3)
		rotate(a, STACK_A);
	else if (position == 2)
	{
		rev_rotation(a, b, STACK_A);
		swap(a, STACK_A);
		rotate(a, STACK_A);
		rotate(a, STACK_A);
	}
}
