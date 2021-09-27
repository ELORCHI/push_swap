/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:13:47 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 14:19:24 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void free_stack(t_stack *stack)
{
	if (stack == NULL)
		return ;
	while (stack)
	{
		free(stack);
		stack = stack->next;
	}
}
