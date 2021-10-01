/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:24:38 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 15:26:56 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_three(t_stack **a)
{
	int		max_index;

	max_index = max_data(*a);
	if (max_index == (*a)->data)
	{
		rotate(a, STACK_A);
		if ((*a)->data > (*a)->next->data)
			swap(a, STACK_A);
	}
	else if (max_index == (*a)->next->data)
	{
		rev_rotation(a, NULL, STACK_A);
		if ((*a)->data > (*a)->next->data)
			swap(a, STACK_A);
	}
	else if (max_index == (*a)->next->next->data)
	{
		if ((*a)->data > (*a)->next->data)
			swap(a, STACK_A);
	}
}
