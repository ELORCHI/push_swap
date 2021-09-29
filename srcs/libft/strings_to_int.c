/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:28:12 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/29 11:35:34 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*string_to_int(char **table, int tab_len)
{
	int	*tab;
	int	i;

	tab = (int *)malloc(sizeof(int) * tab_len);
	i = 0;
	while (i < tab_len)
	{
		tab[i] = ft_atoi(table[i]);
		i++;
	}
	return (tab);
}
