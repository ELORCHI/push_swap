/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:54:10 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:03:35 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rrotate(t_stack **stack, int id)
{
	t_stack	*last;

	if (stack == NULL || *stack == NULL)
		return ;
	last = copy_node(last_node(*stack));
	pop_back(stack);
	push(stack, last);
	if (id == STACK_A)
		ft_putstr("rra\n");
	if (id == STACK_B)
		ft_putstr("rrb\n");
}
