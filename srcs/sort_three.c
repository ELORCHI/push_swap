/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:24:38 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 16:13:31 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_three(t_stack **a)
{
	int		max_index;

	max_index = max(*a);
	if (max_index == (*a)->index)
	{
		rotate(a, STACK_A);
		if ((*a)->index > (*a)->next->index)
			swap(a, STACK_A);
	}
	else if (max_index == (*a)->next->index)
	{
		rev_rotation(a, NULL, STACK_A);
		if ((*a)->index > (*a)->next->index)
			swap(a, STACK_A);
	}
	else if (max_index == (*a)->next->next->index)
	{
		if ((*a)->index > (*a)->next->index)
			swap(a, STACK_A);
	}
}
