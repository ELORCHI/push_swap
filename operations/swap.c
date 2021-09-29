/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:03:45 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:04:03 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	swap(t_stack **stack, int id)
{
	int	tmp;

	if (stack == NULL || *stack == NULL)
		return ;
	if (stack_len(*stack) < 2)
		return ;
	if (id == STACK_A)
		ft_putstr("sa");
	else if (id == STACK_B)
		ft_putstr("sb");
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = tmp;
}
