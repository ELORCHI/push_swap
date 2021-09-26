/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:11:05 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:27:01 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void push_swap(t_stack *a, int size)
{
	t_stack *b;
	int		i;
	int		max_index;
	int		sign_bit;
	int		j;

	sign_bit = 0;
	max_index = max(a);
	i = 0;
	b = NULL;
	while ((max_index >> sign_bit ) != 0)
		sign_bit++;
	while (i < sign_bit)
	{
		j = 0;
		while (j < size)
		{

			if (((top_index(a) >> 1) & 1) == 1)
				rotate(&a, STACK_A);
			else
				push_a_b(&a, &b, STACK_A);
		}
		i++;
	}
}
