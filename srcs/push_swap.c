/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:11:05 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:14:49 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	push_swap(t_stack **a, int size)
{
	t_stack	*b;
	int		i;
	int		max_index;
	int		max_bits;

	max_bits = 0;
	max_index = max(*a);
	i = 0;
	b = NULL;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (size != 0)
		{
			if ((((*a)->index) >> i) & 1)
				rotate(a, STACK_A);
			else
				push_a_b(a, &b, STACK_A);
			size--;
		}
		while (b != NULL)
			push_a_b(a, &b, STACK_B);
		i++;
	}
}
