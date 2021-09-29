/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:45:44 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:02:49 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rotate(t_stack **stack, int id)
{
	t_stack	*head;

	if (stack_len(*stack) <= 1)
		return ;
	head = copy_node(*stack);
	pop(stack);
	push_back(stack, head);
	if (id == STACK_A)
		ft_putstr("ra\n");
	else if (id == STACK_B)
		ft_putstr("rb\n");
}
