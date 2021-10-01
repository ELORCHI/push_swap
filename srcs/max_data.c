/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:22:07 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:06:38 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	max_data(t_stack *a)
{
	int		i;
	t_stack	*tmp;

	i = a->data;
	tmp = a->next;
	while (tmp)
	{
		if (tmp->data > i)
			i = tmp->data;
		tmp = tmp->next;
	}
	return (i);
}
