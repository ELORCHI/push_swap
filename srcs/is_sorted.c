/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:25:21 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:34:37 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	if (stack == NULL)
		return (0);
	if (tmp->next == NULL)
		return (0);
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (-1);
		tmp = tmp->next;
	}
	return (0);
}
