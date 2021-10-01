/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:11:05 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:11:12 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	push_swap(t_stack **a, int size)
{
	t_stack	*b;
	int		i;
	int		max_bits;
	int		j;

	max_bits = 0;
	i = 0;
	b = NULL;
	while ((max(*a) >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*a)->index) >> i) & 1)
				rotate(a, STACK_A);
			else
				push_a_b(a, &b, STACK_A);
		}
		while (b != NULL)
			push_a_b(a, &b, STACK_B);
		i++;
	}
}
