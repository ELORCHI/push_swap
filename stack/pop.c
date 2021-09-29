/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:30:39 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 12:57:18 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	pop(t_stack **stack)
{
	t_stack	*tmp;

	if (stack == NULL || *stack == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
	tmp = NULL;
}
