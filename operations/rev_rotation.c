/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:01:47 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:01:56 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rev_rotation(t_stack **a, t_stack **b, int id)
{
	if (id == STACK_A)
		rrotate(a, STACK_A);
	else if (id == STACK_B)
		rrotate(b, STACK_B);
	else if (id == STACK_A_B)
	{
		rrotate(a, STACK_A_B);
		rrotate(b, STACK_A_B);
		ft_putstr("rrr\n");
	}
}
