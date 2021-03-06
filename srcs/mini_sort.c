/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:24:58 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/01 16:27:47 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	mini_sort(t_stack **a, int argc)
{
	t_stack	*b;

	b = NULL;
	if (argc == 2)
	{
		if ((*a)->data > (*a)->next->data)
			swap(a, STACK_A);
	}
	else if (argc == 1)
		return ;
	else if (argc == 3)
		sort_three(a);
	else if (argc == 4)
		sort_four(a, &b);
	else if (argc == 5)
		sort_five(a, &b);
}
