/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:57:44 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 12:36:17 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack *copy_node(t_stack *srcs)
{
	t_stack *copy;

	copy = (t_stack *)malloc(sizeof(t_stack));
	if (copy)
	{
		copy->next = NULL;
		copy->index = srcs->index;
		copy->data = srcs->data;
	}
	return (copy);
}
