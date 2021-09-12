/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:16:20 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:25:08 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void display_stack(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	if (tmp)
		while (tmp)
		{
			ft_putnbr_fd(tmp->data, 1);
			write(1, "\n", 1);
			tmp = tmp->next;
		}
	else
		ft_putstr("stack is empty\n");
}
