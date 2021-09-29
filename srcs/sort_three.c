/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:24:38 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:24:43 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_three(t_stack **a, t_stack **b)
{
	push_a_b(a, b, STACK_A);
	if ((*a)->data > (*a)->next->data)
		rotate(a, STACK_A);
	push_a_b(a, b, STACK_B);
	if ((*a)->data > (*a)->next->data)
	{
		if ((*a)->data > (*a)->next->next->data)
			rotate(a, STACK_A);
		else
			swap(a, STACK_A);
	}
}
