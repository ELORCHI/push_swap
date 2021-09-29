/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:36:01 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 13:06:59 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (check_params_errors(argc - 1, argv + 1) == -1)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	index_and_fill(&a, argv + 1, argc - 1);
	if (argc - 1 <= 5)
		mini_sort(&a, argc - 1);
	else
		push_swap(&a, argc - 1);
	free_stack(a);
	return (0);
}
