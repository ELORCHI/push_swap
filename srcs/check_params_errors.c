/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params_errors.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:26 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:32:18 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int only_intergers(char **tab)
{
	int i;

	i = 0;
	if (tab == NULL)
		return (-1);
	while (tab[i])
	{
		if (ft_isint(tab[i]) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int check_params_errors(int argc, char **str)
{
	if (only_intergers(str) == -1)
		return (-1);
	sort_strings(str, argc);
	if (contain_duplicates(str, argc) == 0)
		return (-1);
	return (0);
}
