/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   las_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:55:32 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 12:56:00 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*last_node(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return (NULL);
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
