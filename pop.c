/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:30:39 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 07:24:34 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void pop(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack))
		ft_putstr("stack is empty\n");
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
	tmp = NULL;
}
