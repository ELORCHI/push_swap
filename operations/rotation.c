/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:02:59 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:03:08 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rotation(t_stack **a, t_stack **b, int id)
{
	if (id == STACK_A)
		rotate(a, STACK_A);
	else if (id == STACK_B)
		rotate(b, STACK_B);
	else if (id == STACK_A_B)
	{
		rotate(a, STACK_A_B);
		rotate(b, STACK_A_B);
		ft_putstr("rr");
	}
}
