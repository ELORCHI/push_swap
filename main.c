/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:36:01 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/24 11:14:20 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;
	char	**tab;

	a = NULL;
	tab = ft_rmstr(0, argv);
	if (check_params_errors(argc - 1, tab) == -1)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	a = index_and_fill(&a, tab, argc -1);
	push_swap(&a);
	return 0;
}
