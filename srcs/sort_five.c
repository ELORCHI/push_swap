/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:16:47 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:27:59 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	helper(t_stack **a, t_stack **b, int position)
{
	if (position == 3)
	{
		rev_rotation(a, b, STACK_A);
		swap(a, STACK_A);
		rotate(a, STACK_A);
		rotate(a, STACK_A);
		return ;
	}
	if (position == 2)
	{
		push_a_b(a, b, STACK_A);
		rotate(a, STACK_A);
		rotate(a, STACK_A);
		push_a_b(a, b, STACK_B);
		rev_rotation(a, b, STACK_A);
		rev_rotation(a, b, STACK_A);
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		position;

	push_a_b(a, b, STACK_A);
	sort_four(a, b);
	tmp = (*a)->next;
	position = 0;
	while (tmp && tmp->index < (*a)->index)
	{
		tmp = tmp->next;
		position++;
	}
	if (position == 1)
		swap(a, STACK_A);
	else if (position == 4)
		rotate(a, STACK_A);
	else
		helper(a, b, position);
}
