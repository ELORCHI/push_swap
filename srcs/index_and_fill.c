/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_and_fill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:42:29 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:44:59 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	index_and_fill(t_stack **stack, char **tab, int argc)
{
	t_stack *tmp;
	int 	i;
	int		index;
	char	**copy;

	i = 0;
	copy = ft_tabdup(tab); 
	sort_strings(copy, argc);
	while (tab[i])
	{
		printf("%s|\n", tab[i]);
		index = get_element_index(copy, tab[i]);
		tmp = new_node(ft_atoi(tab[i]));
		tmp->index = index;
		push(stack, tmp);
		i++;
	}
}
