/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params_errors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:26 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/27 11:33:07 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int only_intergers(char **tab)
{
	int i;
	int t;

	i = 0;
	if (tab == NULL)
		return (-1);
	while (tab[i])
	{
		t = 0;
		if (tab[i][0] == '-' ||  tab[i][0] == '+')
			t = 1;
		if (ft_isint(tab[i] + t) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int check_params_errors(int argc, char **str)
{
	char **tmp;
	int *tab;;

	tmp = ft_tabdup(str);
	if (only_intergers(tmp) == -1)
	{
		ft_free(tmp);
		return (-1);
	}
	tab = string_to_int(str, argc);
	sort(tab, argc);
	if (contain_duplicates(tab, argc) == 0)
	{
		free(tab);
		return (-1);
	}
	free(tab);
	return (0);
}
