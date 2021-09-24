/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 07:12:33 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/24 07:27:51 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	sort_strings(char **table, int tab_len)
{
	char	*tmp;
	int		index;
	int		j;

	index = 1;
	while (index < tab_len)
	{
		j = index - 1;
		tmp = table[index];
		while (j >= 0 && (ft_strcmp(table[j], tmp) >= 0))
		{
			table[j + 1] = table[j];
			j--;
		}
		table[j + 1] = tmp;
		index++;
	}
}
