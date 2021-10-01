/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:14:44 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:06:56 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	node_position(t_stack *stack, t_stack *node)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		if (tmp->data == node->data)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
