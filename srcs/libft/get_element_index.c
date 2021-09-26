/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_element_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 08:30:54 by eel-orch          #+#    #+#             */
/*   Updated: 2021/09/26 10:42:00 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int get_element_index(char **tab, char *str)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], str) == 0)
			return (i);
		i++;
	}
	return (-1);
}
