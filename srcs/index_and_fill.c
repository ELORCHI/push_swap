/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_and_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:42:29 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 11:38:24 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	index_and_fill(t_stack **stack, char **tab, int argc)
{
	t_stack *tmp;
	int 	i;
	int		index;
	int		*copy;
	int		decimal;

	i = 0;
	copy = string_to_int(tab, argc);
	sort(copy, argc);
	i = argc - 1;
	printf("argc == %d", argc);
	while (i >= 0)
	{
		decimal = ft_atoi(tab[i]);
		printf("decimal == %d\n", decimal);
		index = get_element_index(copy, decimal, argc);
		tmp = new_node(decimal);
		tmp->index = index;
		push(stack, tmp);
		i--;
	}
	display_stack(*stack, STACK_A);
	free(copy);
}
