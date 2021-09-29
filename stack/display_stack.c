/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:16:20 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 12:55:13 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	display_stack(t_stack *stack, int id)
{
	t_stack	*tmp;

	if (id == STACK_A)
		ft_putstr("\n===== STACK_A =====\n");
	else
		ft_putstr("\n===== STACK_B =====\n");
	tmp = stack;
	while (tmp)
	{
		ft_putnbr_fd(tmp->data, 1);
		write(1, "\n", 1);
		tmp = tmp->next;
	}
	else
		ft_putstr("stack is empty\n");
}
