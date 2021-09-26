/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:13:56 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 08:50:04 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int max(t_stack *a)
{
	t_stack *tmp;
	int		max;

	if (a == NULL)
		return (-1);
	tmp = a;
	max = a->index;
	while (tmp->next)
	{
		if (tmp->next->index > max)
			max = tmp->next->index;
		tmp = tmp->next;
	}
	return (max);
}
