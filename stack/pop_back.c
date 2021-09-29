/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:47:53 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 12:58:10 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	pop_back(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*to_free;

	if (stack == NULL || *stack == NULL)
		return ;
	if ((*stack)->next == NULL)
	{
		*stack = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	to_free = tmp->next;
	tmp->next = NULL;
	free(to_free);
}
