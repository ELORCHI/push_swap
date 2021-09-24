/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 09:23:33 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/24 09:46:50 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_rmstr(char **tab, int index)
{
	char	**new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = (char **)malloc(sizeof(char *) * (ft_tablen(tab)));
	while (tab[i])
	{
		if (i == index)
		{
			i++;
			continue ;
		}
		new[j] = ft_strdup(tab[i]);
		j++;
		i++;
	}
	new[j] = NULL;
	return (new);
}
