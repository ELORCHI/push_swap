/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 06:05:25 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/12 06:15:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void push(t_stack **stack, t_stack *new)
{
	if (stack == NULL)
		return ;
	if (*stack != NULL)
	{
		new->next = *stack;
		*stack = new;	
		return ;
	}
	*stack = new;
}
