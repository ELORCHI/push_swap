/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params_errors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:26 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 16:15:10 by eel-orch         ###   ########.fr       */
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

	tmp = ft_tabdup(str);
	if (only_intergers(tmp) == -1)
	{
		//free;
		return (-1);
	}
	sort_strings(tmp, argc);
	if (contain_duplicates(tmp, argc) == 0)
	{
		//free
		return (-1);
	}
	return (0);
}
